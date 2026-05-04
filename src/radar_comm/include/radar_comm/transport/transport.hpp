#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace radar_comm {

struct TransportConfig {
  enum class Type {
    Serial,
    TcpClient,
  };

  Type type{Type::Serial};
  std::string serial_port{"/dev/ttyACM0"};
  int baud_rate{115200};
  std::string tcp_host{"127.0.0.1"};
  uint16_t tcp_port{10001};
};

const char *to_string(TransportConfig::Type type);
bool transport_type_from_string(const std::string &value,
                                TransportConfig::Type &type);
std::string describe_transport(const TransportConfig &config);

class Transport {
public:
  struct Statistics {
    uint64_t rx_bytes{0};
    uint64_t rx_chunks{0};
    uint64_t tx_bytes{0};
    uint64_t tx_chunks{0};
    uint64_t disconnects{0};
  };

  using Callback = std::function<void(const uint8_t *, std::size_t)>;
  using DisconnectCallback = std::function<void()>;

  virtual ~Transport() = default;

  virtual bool open(const TransportConfig &config) = 0;
  virtual void close() = 0;
  virtual bool write(const std::vector<uint8_t> &data) = 0;

  virtual void setCallback(Callback cb) = 0;
  virtual void setDisconnectCallback(DisconnectCallback cb) = 0;
  virtual void setDebug(bool enabled) = 0;
  virtual void setCpuAffinity(int cpu) = 0;
  virtual void setBufferSize(std::size_t bytes) = 0;
  virtual void setPollTimeoutMs(int timeout_ms) = 0;
  virtual void start() = 0;
  virtual void stop() = 0;
  virtual Statistics statistics() const = 0;
};

std::unique_ptr<Transport> make_asio_transport();

} // namespace radar_comm
