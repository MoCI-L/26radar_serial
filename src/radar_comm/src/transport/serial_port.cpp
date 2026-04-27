#include "radar_comm/transport/serial_port.hpp"

#include <cerrno>
#include <cstring>
#include <sys/epoll.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <fcntl.h>
#include <linux/serial.h>
#include <termios.h>
#include <unistd.h>

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

} // namespace

SerialPort::SerialPort() {
  buffers_[0].resize(buffer_size_);
  buffers_[1].resize(buffer_size_);
}

SerialPort::~SerialPort() { stop(); }

bool SerialPort::open(const std::string &port, int baudrate) {
  port_name_ = port;
  baudrate_ = baudrate;
  fd_ = ::open(port.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);
  if (fd_ < 0) {
    return false;
  }

  if (setBaud(baudrate) != 0) {
    close();
    return false;
  }

  configureLowLatency();

  epoll_fd_ = epoll_create1(0);
  if (epoll_fd_ < 0) {
    close();
    return false;
  }

  epoll_event event {};
  event.events = EPOLLIN | EPOLLERR | EPOLLHUP;
  event.data.fd = fd_;
  if (epoll_ctl(epoll_fd_, EPOLL_CTL_ADD, fd_, &event) != 0) {
    close();
    return false;
  }

  return true;
}

void SerialPort::close() {
  running_ = false;
  closeUnlocked();
}

void SerialPort::closeUnlocked() {
  if (epoll_fd_ >= 0) {
    ::close(epoll_fd_);
    epoll_fd_ = -1;
  }
  if (fd_ >= 0) {
    ::close(fd_);
    fd_ = -1;
  }
}

bool SerialPort::write(const std::vector<uint8_t> &data) {
  if (fd_ < 0 || data.empty()) {
    return false;
  }

  const auto written = ::write(fd_, data.data(), data.size());
  return written == static_cast<ssize_t>(data.size());
}

void SerialPort::setCallback(Callback cb) { callback_ = cb; }
void SerialPort::setDisconnectCallback(DisconnectCallback cb) { disconnect_callback_ = cb; }
void SerialPort::setDebug(bool enabled) { debug_ = enabled; }
void SerialPort::setCpuAffinity(int cpu) { cpu_affinity_ = cpu; }
void SerialPort::setBufferSize(std::size_t bytes) {
  buffer_size_ = bytes == 0 ? 4096 : bytes;
  buffers_[0].resize(buffer_size_);
  buffers_[1].resize(buffer_size_);
}
void SerialPort::setPollTimeoutMs(int timeout_ms) { poll_timeout_ms_ = timeout_ms; }
SerialPort::Statistics SerialPort::statistics() const { return stats_; }

void SerialPort::start() {
  if (running_) {
    return;
  }
  running_ = true;
  th_ = std::thread(&SerialPort::loop, this);
}

void SerialPort::stop() {
  running_ = false;
  if (th_.joinable())
    th_.join();
  close();
}

int SerialPort::setBaud(int baudrate) {
  struct termios tty {};
  if (tcgetattr(fd_, &tty) != 0) {
    return -1;
  }

  speed_t speed = B115200;
  if (baudrate == 230400) {
    speed = B230400;
  } else if (baudrate == 460800) {
    speed = B460800;
  } else if (baudrate == 921600) {
    speed = B921600;
  }

  cfmakeraw(&tty);
  cfsetispeed(&tty, speed);
  cfsetospeed(&tty, speed);

  tty.c_cflag |= (CLOCAL | CREAD);
  tty.c_cflag &= ~PARENB;
  tty.c_cflag &= ~CSTOPB;
  tty.c_cflag &= ~CSIZE;
  tty.c_cflag |= CS8;
  tty.c_cc[VMIN] = 0;
  tty.c_cc[VTIME] = 0;

  return tcsetattr(fd_, TCSANOW, &tty);
}

bool SerialPort::configureLowLatency() {
#ifdef __linux__
  struct serial_struct serial_cfg {};
  if (ioctl(fd_, TIOCGSERIAL, &serial_cfg) == 0) {
    serial_cfg.flags |= ASYNC_LOW_LATENCY;
    (void)ioctl(fd_, TIOCSSERIAL, &serial_cfg);
  }
#endif
  return true;
}

void SerialPort::loop() {
  bind_current_thread_if_needed(cpu_affinity_);
  std::size_t active_index = 0;
  epoll_event events[4];

  while (running_) {
    const int ready = epoll_wait(epoll_fd_, events, 4, poll_timeout_ms_);
    if (ready < 0) {
      if (errno == EINTR) {
        continue;
      }
      break;
    }

    if (ready == 0) {
      continue;
    }

    for (int i = 0; i < ready && running_; ++i) {
      const uint32_t ev = events[i].events;
      if ((ev & (EPOLLERR | EPOLLHUP)) != 0U) {
        stats_.disconnects++;
        running_ = false;
        break;
      }

      auto &buffer = buffers_[active_index];
      const auto read_size = ::read(fd_, buffer.data(), buffer.size());
      if (read_size > 0) {
        stats_.rx_bytes += static_cast<uint64_t>(read_size);
        stats_.rx_chunks++;
        if (callback_) {
          callback_(buffer.data(), static_cast<std::size_t>(read_size));
        }
        active_index = 1U - active_index;
      }
      if (read_size == 0) {
        stats_.disconnects++;
        running_ = false;
        break;
      }
      if (read_size < 0 && errno != EAGAIN && errno != EWOULDBLOCK) {
        stats_.disconnects++;
        running_ = false;
        break;
      }
    }
  }

  closeUnlocked();
  if (disconnect_callback_) {
    disconnect_callback_();
  }
}

} // namespace radar_comm
