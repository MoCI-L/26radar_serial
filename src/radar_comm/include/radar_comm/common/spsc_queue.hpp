#pragma once

#include <array>
#include <atomic>
#include <cstddef>
#include <optional>
#include <utility>

namespace radar_comm {

template <typename T, std::size_t Capacity>
class SpscQueue {
  static_assert(Capacity >= 2, "SpscQueue capacity must be at least 2");

public:
  bool push(T value) {
    const auto head = head_.load(std::memory_order_relaxed);
    const auto next = increment(head);
    if (next == tail_.load(std::memory_order_acquire)) {
      return false;
    }

    buffer_[head] = std::move(value);
    head_.store(next, std::memory_order_release);
    return true;
  }

  std::optional<T> pop() {
    const auto tail = tail_.load(std::memory_order_relaxed);
    if (tail == head_.load(std::memory_order_acquire)) {
      return std::nullopt;
    }

    auto value = std::move(*buffer_[tail]);
    buffer_[tail].reset();
    tail_.store(increment(tail), std::memory_order_release);
    return value;
  }

  std::size_t size() const {
    const auto head = head_.load(std::memory_order_acquire);
    const auto tail = tail_.load(std::memory_order_acquire);
    if (head >= tail) {
      return head - tail;
    }
    return Capacity - (tail - head);
  }

private:
  static constexpr std::size_t increment(std::size_t index) {
    return (index + 1) % Capacity;
  }

  std::array<std::optional<T>, Capacity> buffer_{};
  std::atomic<std::size_t> head_{0};
  std::atomic<std::size_t> tail_{0};
};

} // namespace radar_comm
