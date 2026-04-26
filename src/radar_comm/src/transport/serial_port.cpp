#include "radar_comm/transport/serial_port.hpp"

#include <cerrno>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

namespace radar_comm {

SerialPort::SerialPort() {}

SerialPort::~SerialPort() { stop(); }

bool SerialPort::open(const std::string &port, int baudrate) {
  fd_ = ::open(port.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);
  if (fd_ < 0) {
    return false;
  }

  if (setBaud(baudrate) != 0) {
    close();
    return false;
  }

  return true;
}

void SerialPort::close() {
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

void SerialPort::start() {
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
  tty.c_cc[VTIME] = 1;

  return tcsetattr(fd_, TCSANOW, &tty);
}

void SerialPort::loop() {
  uint8_t buf[256];

  while (running_) {
    int n = ::read(fd_, buf, sizeof(buf));
    if (n > 0 && callback_) {
      for (int i = 0; i < n; i++) {
        callback_(buf[i]);
      }
      continue;
    }

    if (n < 0 && errno != EAGAIN && errno != EWOULDBLOCK) {
      running_ = false;
      break;
    }

    ::usleep(1000);
  }
}

} // namespace radar_comm
