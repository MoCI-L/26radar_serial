#include "radar_comm/transport/asio_transport.hpp"

#include <algorithm>
#include <cctype>
#include <type_traits>
#include <utility>

#include <boost/asio/bind_executor.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/post.hpp>
#include <boost/asio/read.hpp>
#include <boost/asio/write.hpp>

#ifdef __linux__
#include <fcntl.h>
#include <linux/serial.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <unistd.h>
#endif

namespace radar_comm {

namespace {

void bind_current_thread_if_needed(int cpu) {
  if (cpu < 0) {
    return;
  }

#ifdef __linux__
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(static_cast<unsigned>(cpu), &cpuset);
  (void)pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpuset);
#else
  (void)cpu;
#endif
}

void configure_low_latency(boost::asio::serial_port &port) {
#ifdef __linux__
  struct serial_struct serial_cfg {};
  if (ioctl(port.native_handle(), TIOCGSERIAL, &serial_cfg) == 0) {
    serial_cfg.flags |= ASYNC_LOW_LATENCY;
    (void)ioctl(port.native_handle(), TIOCSSERIAL, &serial_cfg);
  }
#else
  (void)port;
#endif
}

} // namespace

const char *to_string(TransportConfig::Type type) {
  switch (type) {
  case TransportConfig::Type::Serial:
    return "serial";
  case TransportConfig::Type::TcpClient:
    return "tcp_client";
  }
  return "unknown";
}

bool transport_type_from_string(const std::string &value,
                                TransportConfig::Type &type) {
  std::string lowered(value);
  std::transform(lowered.begin(), lowered.end(), lowered.begin(),
                 [](unsigned char c) { return static_cast<char>(std::tolower(c)); });

  if (lowered == "serial") {
    type = TransportConfig::Type::Serial;
    return true;
  }
  if (lowered == "tcp" || lowered == "tcp_client") {
    type = TransportConfig::Type::TcpClient;
    return true;
  }
  return false;
}

std::string describe_transport(const TransportConfig &config) {
  if (config.type == TransportConfig::Type::Serial) {
    return config.serial_port + " @ " + std::to_string(config.baud_rate);
  }
  return config.tcp_host + ":" + std::to_string(config.tcp_port);
}

std::unique_ptr<Transport> make_asio_transport() {
  return std::make_unique<AsioTransport>();
}

AsioTransport::AsioTransport() : strand_(io_context_.get_executor()) {
  read_buffer_.resize(4096);
}

AsioTransport::~AsioTransport() { stop(); }

bool AsioTransport::open(const TransportConfig &config) {
  stop();

  config_ = config;
  disconnect_notified_.store(false, std::memory_order_relaxed);
  stop_requested_.store(false, std::memory_order_relaxed);
  io_context_.restart();

  if (config.type == TransportConfig::Type::Serial) {
    return open_serial(config);
  }
  return open_tcp_client(config);
}

bool AsioTransport::open_serial(const TransportConfig &config) {
  boost::system::error_code ec;
  auto &port = stream_.emplace<SerialPortHandle>(io_context_);
  port.open(config.serial_port, ec);
  if (ec) {
    stream_.emplace<std::monostate>();
    return false;
  }

  port.set_option(
      boost::asio::serial_port_base::baud_rate(config.baud_rate), ec);
  if (ec) {
    port.close();
    stream_.emplace<std::monostate>();
    return false;
  }

  port.set_option(boost::asio::serial_port_base::character_size(8), ec);
  if (!ec) {
    port.set_option(boost::asio::serial_port_base::parity(
                        boost::asio::serial_port_base::parity::none),
                    ec);
  }
  if (!ec) {
    port.set_option(boost::asio::serial_port_base::stop_bits(
                        boost::asio::serial_port_base::stop_bits::one),
                    ec);
  }
  if (!ec) {
    port.set_option(boost::asio::serial_port_base::flow_control(
                        boost::asio::serial_port_base::flow_control::none),
                    ec);
  }
  if (ec) {
    port.close();
    stream_.emplace<std::monostate>();
    return false;
  }

  configure_low_latency(port);
  opened_.store(true, std::memory_order_relaxed);
  return true;
}

bool AsioTransport::open_tcp_client(const TransportConfig &config) {
  boost::system::error_code ec;
  boost::asio::ip::tcp::resolver resolver(io_context_);
  const auto endpoints =
      resolver.resolve(config.tcp_host, std::to_string(config.tcp_port), ec);
  if (ec) {
    return false;
  }

  auto &socket = stream_.emplace<TcpSocketHandle>(io_context_);
  boost::asio::connect(socket, endpoints, ec);
  if (ec) {
    stream_.emplace<std::monostate>();
    return false;
  }

  socket.set_option(boost::asio::ip::tcp::no_delay(true), ec);
  if (ec) {
    socket.close();
    stream_.emplace<std::monostate>();
    return false;
  }

  opened_.store(true, std::memory_order_relaxed);
  return true;
}

void AsioTransport::close() { stop(); }

bool AsioTransport::write(const std::vector<uint8_t> &data) {
  if (!opened_.load(std::memory_order_relaxed) || data.empty()) {
    return false;
  }

  boost::asio::post(
      strand_, [this, data]() mutable {
        if (!opened_.load(std::memory_order_relaxed)) {
          return;
        }

        const bool idle = write_queue_.empty();
        write_queue_.push_back(std::move(data));
        if (idle) {
          do_write();
        }
      });
  return true;
}

void AsioTransport::setCallback(Callback cb) {
  std::lock_guard<std::mutex> lock(callback_mutex_);
  callback_ = std::move(cb);
}

void AsioTransport::setDisconnectCallback(DisconnectCallback cb) {
  std::lock_guard<std::mutex> lock(callback_mutex_);
  disconnect_callback_ = std::move(cb);
}

void AsioTransport::setDebug(bool enabled) {
  debug_.store(enabled, std::memory_order_relaxed);
}

void AsioTransport::setCpuAffinity(int cpu) {
  cpu_affinity_.store(cpu, std::memory_order_relaxed);
}

void AsioTransport::setBufferSize(std::size_t bytes) {
  read_buffer_.resize(bytes == 0 ? 4096 : bytes);
}

void AsioTransport::setPollTimeoutMs(int timeout_ms) {
  poll_timeout_ms_.store(timeout_ms, std::memory_order_relaxed);
}

void AsioTransport::start() {
  if (!opened_.load(std::memory_order_relaxed) ||
      started_.exchange(true, std::memory_order_relaxed)) {
    return;
  }

  stop_requested_.store(false, std::memory_order_relaxed);
  disconnect_notified_.store(false, std::memory_order_relaxed);
  work_guard_ = std::make_unique<WorkGuard>(io_context_.get_executor());
  boost::asio::post(strand_, [this]() { begin_read(); });

  io_thread_ = std::thread([this]() {
    bind_current_thread_if_needed(cpu_affinity_.load(std::memory_order_relaxed));
    io_context_.run();
  });
}

void AsioTransport::stop() {
  stop_requested_.store(true, std::memory_order_relaxed);

  if (io_thread_.joinable()) {
    boost::asio::post(strand_, [this]() { close_stream(); });
    work_guard_.reset();
    io_thread_.join();
  } else {
    close_stream();
  }

  io_context_.stop();
  io_context_.restart();
  started_.store(false, std::memory_order_relaxed);
}

Transport::Statistics AsioTransport::statistics() const {
  Statistics stats;
  stats.rx_bytes = rx_bytes_.load(std::memory_order_relaxed);
  stats.rx_chunks = rx_chunks_.load(std::memory_order_relaxed);
  stats.tx_bytes = tx_bytes_.load(std::memory_order_relaxed);
  stats.tx_chunks = tx_chunks_.load(std::memory_order_relaxed);
  stats.disconnects = disconnects_.load(std::memory_order_relaxed);
  return stats;
}

void AsioTransport::begin_read() {
  if (!opened_.load(std::memory_order_relaxed)) {
    return;
  }

  std::visit(
      [this](auto &stream) {
        using T = std::decay_t<decltype(stream)>;
        if constexpr (!std::is_same_v<T, std::monostate>) {
          stream.async_read_some(
              boost::asio::buffer(read_buffer_),
              boost::asio::bind_executor(
                  strand_, [this](const boost::system::error_code &ec,
                                  std::size_t bytes_transferred) {
                    if (ec) {
                      handle_read_error(ec);
                      return;
                    }
                    if (bytes_transferred == 0) {
                      handle_read_error(
                          boost::asio::error::make_error_code(
                              boost::asio::error::eof));
                      return;
                    }

                    rx_bytes_.fetch_add(bytes_transferred,
                                        std::memory_order_relaxed);
                    rx_chunks_.fetch_add(1, std::memory_order_relaxed);

                    Callback callback;
                    {
                      std::lock_guard<std::mutex> lock(callback_mutex_);
                      callback = callback_;
                    }

                    if (callback) {
                      callback(read_buffer_.data(), bytes_transferred);
                    }
                    begin_read();
                  }));
        }
      },
      stream_);
}

void AsioTransport::do_write() {
  if (!opened_.load(std::memory_order_relaxed) || write_queue_.empty()) {
    return;
  }

  std::visit(
      [this](auto &stream) {
        using T = std::decay_t<decltype(stream)>;
        if constexpr (!std::is_same_v<T, std::monostate>) {
          boost::asio::async_write(
              stream, boost::asio::buffer(write_queue_.front()),
              boost::asio::bind_executor(
                  strand_, [this](const boost::system::error_code &ec,
                                  std::size_t bytes_transferred) {
                    if (ec) {
                      handle_write_error(ec);
                      return;
                    }

                    tx_bytes_.fetch_add(bytes_transferred,
                                        std::memory_order_relaxed);
                    tx_chunks_.fetch_add(1, std::memory_order_relaxed);
                    write_queue_.pop_front();
                    if (!write_queue_.empty()) {
                      do_write();
                    }
                  }));
        }
      },
      stream_);
}

void AsioTransport::close_stream() {
  if (!opened_.exchange(false, std::memory_order_relaxed) &&
      std::holds_alternative<std::monostate>(stream_)) {
    write_queue_.clear();
    return;
  }

  boost::system::error_code ec;
  std::visit(
      [&ec](auto &stream) {
        using T = std::decay_t<decltype(stream)>;
        if constexpr (std::is_same_v<T, SerialPortHandle>) {
          stream.cancel(ec);
          ec.clear();
          stream.close(ec);
        } else if constexpr (std::is_same_v<T, TcpSocketHandle>) {
          stream.cancel(ec);
          ec.clear();
          stream.shutdown(boost::asio::ip::tcp::socket::shutdown_both, ec);
          ec.clear();
          stream.close(ec);
        }
      },
      stream_);
  stream_.emplace<std::monostate>();
  write_queue_.clear();
}

void AsioTransport::notify_disconnect() {
  if (stop_requested_.load(std::memory_order_relaxed) ||
      disconnect_notified_.exchange(true, std::memory_order_relaxed)) {
    return;
  }

  disconnects_.fetch_add(1, std::memory_order_relaxed);
  DisconnectCallback callback;
  {
    std::lock_guard<std::mutex> lock(callback_mutex_);
    callback = disconnect_callback_;
  }
  if (callback) {
    callback();
  }
}

void AsioTransport::handle_read_error(const boost::system::error_code &ec) {
  if (ec == boost::asio::error::operation_aborted &&
      stop_requested_.load(std::memory_order_relaxed)) {
    return;
  }
  close_stream();
  notify_disconnect();
}

void AsioTransport::handle_write_error(const boost::system::error_code &ec) {
  if (ec == boost::asio::error::operation_aborted &&
      stop_requested_.load(std::memory_order_relaxed)) {
    return;
  }
  close_stream();
  notify_disconnect();
}

} // namespace radar_comm
