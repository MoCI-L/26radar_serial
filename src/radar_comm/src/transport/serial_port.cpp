#include "radar_comm/transport/serial_port.hpp"

#include <utility>

namespace radar_comm {

SerialPort::SerialPort() : transport_(make_asio_transport()) {}

SerialPort::~SerialPort() { stop(); }

bool SerialPort::open(const std::string &port, int baudrate) {
  TransportConfig config;
  config.type = TransportConfig::Type::Serial;
  config.serial_port = port;
  config.baud_rate = baudrate;
  return transport_->open(config);
}

void SerialPort::close() { transport_->close(); }

bool SerialPort::write(const std::vector<uint8_t> &data) {
  return transport_->write(data);
}

void SerialPort::setCallback(Callback cb) { transport_->setCallback(std::move(cb)); }

void SerialPort::setDisconnectCallback(DisconnectCallback cb) {
  transport_->setDisconnectCallback(std::move(cb));
}

void SerialPort::setDebug(bool enabled) { transport_->setDebug(enabled); }

void SerialPort::setCpuAffinity(int cpu) { transport_->setCpuAffinity(cpu); }

void SerialPort::setBufferSize(std::size_t bytes) {
  transport_->setBufferSize(bytes);
}

void SerialPort::setPollTimeoutMs(int timeout_ms) {
  transport_->setPollTimeoutMs(timeout_ms);
}

void SerialPort::start() { transport_->start(); }

void SerialPort::stop() { transport_->stop(); }

SerialPort::Statistics SerialPort::statistics() const {
  return transport_->statistics();
}

} // namespace radar_comm
