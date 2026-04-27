#pragma once

#include <atomic>
#include <cstddef>
#include <functional>
#include <string>
#include <thread>
#include <vector>

namespace radar_comm {

class SerialPort {
public:
  struct Statistics {
    uint64_t rx_bytes{0};
    uint64_t rx_chunks{0};
    uint64_t disconnects{0};
  };

  using Callback = std::function<void(const uint8_t *, std::size_t)>;
  using DisconnectCallback = std::function<void()>;

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
  void loop();
  int setBaud(int baudrate);
  bool configureLowLatency();
  void closeUnlocked();

private:
  int fd_{-1};
  int epoll_fd_{-1};
  std::thread th_;
  std::atomic<bool> running_{false};
  Callback callback_;
  DisconnectCallback disconnect_callback_;
  std::string port_name_;
  int baudrate_{115200};
  bool debug_{false};
  int cpu_affinity_{-1};
  std::size_t buffer_size_{4096};
  int poll_timeout_ms_{100};
  std::vector<uint8_t> buffers_[2];
  Statistics stats_{};
};

} // namespace radar_comm
