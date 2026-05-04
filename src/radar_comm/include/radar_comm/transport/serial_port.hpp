#pragma once

#include <memory>
#include <string>
#include <vector>

#include "radar_comm/transport/transport.hpp"

namespace radar_comm {

class SerialPort {
public:
  using Statistics = Transport::Statistics;
  using Callback = Transport::Callback;
  using DisconnectCallback = Transport::DisconnectCallback;

  SerialPort();
  ~SerialPort();

  bool open(const std::string &port, int baudrate);
  void close();
  bool write(const std::vector<uint8_t> &data);

  void setCallback(Callback cb);
  void setDisconnectCallback(DisconnectCallback cb);
  void setDebug(bool enabled);
  void setCpuAffinity(int cpu);
  void setBufferSize(std::size_t bytes);
  void setPollTimeoutMs(int timeout_ms);
  void start();
  void stop();
  Statistics statistics() const;

private:
  std::unique_ptr<Transport> transport_;
};

} // namespace radar_comm
