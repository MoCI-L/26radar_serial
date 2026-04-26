#pragma once

#include <atomic>
#include <functional>
#include <string>
#include <thread>
#include <vector>

namespace radar_comm {

class SerialPort {
public:
  using Callback = std::function<void(uint8_t)>;

  SerialPort();
  ~SerialPort();

  bool open(const std::string &port, int baudrate);
  void close();
  bool write(const std::vector<uint8_t> &data);

  void setCallback(Callback cb);
  void start();
  void stop();

private:
  void loop();
  int setBaud(int baudrate);

private:
  int fd_{-1};
  std::thread th_;
  std::atomic<bool> running_{false};
  Callback callback_;
};

} // namespace radar_comm
