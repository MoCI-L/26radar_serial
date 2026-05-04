#pragma once

#include <atomic>
#include <deque>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <variant>
#include <vector>

#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/serial_port.hpp>
#include <boost/asio/strand.hpp>

#include "radar_comm/transport/transport.hpp"

namespace radar_comm {

class AsioTransport final : public Transport {
public:
  AsioTransport();
  ~AsioTransport() override;

  bool open(const TransportConfig &config) override;
  void close() override;
  bool write(const std::vector<uint8_t> &data) override;

  void setCallback(Callback cb) override;
  void setDisconnectCallback(DisconnectCallback cb) override;
  void setDebug(bool enabled) override;
  void setCpuAffinity(int cpu) override;
  void setBufferSize(std::size_t bytes) override;
  void setPollTimeoutMs(int timeout_ms) override;
  void start() override;
  void stop() override;
  Statistics statistics() const override;

private:
  using SerialPortHandle = boost::asio::serial_port;
  using TcpSocketHandle = boost::asio::ip::tcp::socket;
  using StreamHandle =
      std::variant<std::monostate, SerialPortHandle, TcpSocketHandle>;
  using WorkGuard = boost::asio::executor_work_guard<
      boost::asio::io_context::executor_type>;

  void begin_read();
  void do_write();
  void close_stream();
  void notify_disconnect();

  bool open_serial(const TransportConfig &config);
  bool open_tcp_client(const TransportConfig &config);

  void handle_read_error(const boost::system::error_code &ec);
  void handle_write_error(const boost::system::error_code &ec);

  boost::asio::io_context io_context_;
  boost::asio::strand<boost::asio::io_context::executor_type> strand_;
  std::unique_ptr<WorkGuard> work_guard_;
  StreamHandle stream_;
  std::thread io_thread_;
  mutable std::mutex callback_mutex_;
  Callback callback_;
  DisconnectCallback disconnect_callback_;
  std::deque<std::vector<uint8_t>> write_queue_;
  std::vector<uint8_t> read_buffer_;
  TransportConfig config_{};
  std::atomic<bool> opened_{false};
  std::atomic<bool> started_{false};
  std::atomic<bool> stop_requested_{false};
  std::atomic<bool> disconnect_notified_{false};
  std::atomic<bool> debug_{false};
  std::atomic<int> cpu_affinity_{-1};
  std::atomic<int> poll_timeout_ms_{100};
  std::atomic<uint64_t> rx_bytes_{0};
  std::atomic<uint64_t> rx_chunks_{0};
  std::atomic<uint64_t> tx_bytes_{0};
  std::atomic<uint64_t> tx_chunks_{0};
  std::atomic<uint64_t> disconnects_{0};
};

} // namespace radar_comm
