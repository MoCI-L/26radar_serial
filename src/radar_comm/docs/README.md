# RM Radar Serial Bridge

本包基于以下资料实现并做了工程化增强：

- `RoboMaster 2026 机甲大师高校系列赛通信协议 V1.3.0（20260327）`
- `rule.md`
- `radar.yaml`

当前实现聚焦雷达相关链路，覆盖：

- `0x020C` 雷达标记进度
- `0x020E` 雷达自主决策状态
- `0x0301 / 0x0122` 自定义雷达状态下发（机器人 ID + 干扰波等级）
- `0x0301 / 0x0121` 雷达自主决策指令
- `0x0305` 小地图机器人坐标
- `0x0A01 ~ 0x0A06` 雷达无线链路全部 6 个命令

## 1. 更新升级

相较原始版本，当前工程新增或强化了以下能力：

- 串口层
  - 基于 `Boost.Asio` 的跨平台异步 I/O
  - 同时支持 `serial` 与 `tcp_client` 两种裁判链路接入
  - 异步读写队列，降低收发互相阻塞
  - 自动重连
  - 可选 CPU 绑定
- Parser / Decode
  - 批量解析，不再逐字节系统调用
  - CRC8 / CRC16 失败统计
  - 帧同步恢复
  - 超时丢帧机制
  - payload 长度校验
  - unknown cmd 监控
- ROS2 Bridge
  - 接收线程与 ROS 发布线程解耦
  - Lock-Free SPSC 队列
  - 每条业务消息附带 `stamp`
  - QoS 可配置
  - Topic 按 `rx / tx / status` 分层
  - watchdog 检测长时间无数据并触发重连
  - 异常隔离与异常计数
- 调试与运维
  - `debug_enabled` 开关
  - HEX 日志仅在 debug 开启时输出
  - 原始字节流录制
  - 实时状态统计话题
  - 启动脚本

## 2. 架构说明

当前节点名：`radar_bridge_node`

数据流如下：

1. `Boost.Asio` I/O 线程等待串口或 TCP 数据到达
2. 传输层批量读取字节块并回调给协议解析器
3. 同线程调用 `ProtocolParser::process()` 批处理解析
4. 成功解出的协议对象进入 Lock-Free SPSC 队列
5. ROS 发布线程从队列取出数据并发布到对应 topic
6. watchdog / status timer 独立监控链路状态

这个结构的目标是：

- 传输线程尽量只做 I/O 和解析，不碰 ROS 重逻辑
- 解析结果异步交给发布线程，降低卡顿传播
- 出错时只隔离当前阶段，避免一处异常直接把整个链路打死

## 3. 协议边界

- 帧格式遵循 RM 标准帧：
  - SOF `0xA5`
  - `frame_header[5]`
  - `cmd_id[2]`
  - `payload[n]`
  - `CRC16[2]`
- 所有 payload 使用小端字节序
- 只有 CRC8、CRC16、长度校验都通过的帧才会进入 ROS 层
- `0x0121` 不是顶层 `cmd_id`，而是 `0x0301` 的子内容 ID

## 4. 消息接口变化

所有雷达相关 ROS 消息都增加了：

```text
builtin_interfaces/Time stamp
```

新增状态消息：

```text
radar_interfaces/msg/RadarCommStatus
```

因此如果你已有其他包依赖这些消息，需要重新编译依赖包。

## 5. 构建

```bash
colcon build --packages-select radar_interfaces radar_comm
source install/setup.bash
```

协议自检：

```bash
./build/radar_comm/test_parser
```

成功输出：

```text
Parser OK
```

## 6. 启动

默认参数文件：

- [serial_node.yaml](/home/moci/radar_serial/src/radar_comm/config/serial_node.yaml)

推荐直接用脚本：

```bash
src/radar_comm/scripts/run_radar_serial.sh
```

或者指定别的参数文件：

```bash
src/radar_comm/scripts/run_radar_serial.sh /absolute/path/to/serial_node.yaml
```

也可以直接启动节点：

```bash
ros2 run radar_comm serial_node --ros-args --params-file src/radar_comm/config/serial_node.yaml
```

## 7. 参数说明

核心传输参数：

- `transport_type`：`serial` 或 `tcp_client`
- `port`：串口设备名，默认 `/dev/ttyACM0`
- `baud_rate`：支持 `115200 / 230400 / 460800 / 921600`
- `tcp_host`：当 `transport_type=tcp_client` 时使用
- `tcp_port`：当 `transport_type=tcp_client` 时使用
- `reconnect_interval_ms`：断线重连周期
- `transport_poll_timeout_ms`：传输轮询参数，占位兼容旧配置
- `epoll_timeout_ms`：旧版兼容参数，仍可保留
- `read_buffer_size`：单次批量读缓存大小

解析与 watchdog：

- `frame_timeout_ms`：半包超时后主动丢弃
- `watchdog_timeout_ms`：超过该时间未收到任何数据则强制重连

调试与录制：

- `debug_enabled`：打开后输出 HEX 调试日志
- `record_raw`：是否录制原始字节流
- `record_path`：录制文件路径

QoS：

- `best_effort_qos`：`true` 时接收数据用 best-effort
- `data_qos_depth`：业务 topic depth
- `status_qos_depth`：状态 topic depth

线程与告警：

- `publish_queue_warn_threshold`：发布队列深度告警阈值
- `rx_cpu_affinity`：传输线程绑定 CPU，`-1` 表示关闭
- `publish_cpu_affinity`：发布线程绑定 CPU
- `reconnect_cpu_affinity`：重连线程绑定 CPU

## 8. Topic 划分

### 8.1 接收业务话题

- `/radar/rx/enemy/position` -> `radar_interfaces/msg/EnemyPosition`
- `/radar/rx/enemy/hp` -> `radar_interfaces/msg/EnemyHP`
- `/radar/rx/enemy/ammo` -> `radar_interfaces/msg/EnemyAmmo`
- `/radar/rx/enemy/macro_status` -> `radar_interfaces/msg/MacroStatus`
- `/radar/rx/enemy/buffs` -> `radar_interfaces/msg/Buffs`
- `/radar/rx/enemy/interference_key` -> `radar_interfaces/msg/InterferenceKey`
- `/radar/rx/radar/mark_progress` -> `radar_interfaces/msg/RadarMarkProgress`
- `/radar/rx/radar/info` -> `radar_interfaces/msg/RadarInfo`
- `/radar/rx/radar_info_forward` -> `radar_interfaces/msg/RadarInfoForward`
- `/radar/rx/map_robot_data` -> `radar_interfaces/msg/MapRobotData`
- `/radar/rx/decision_command` -> `radar_interfaces/msg/RadarDecisionCommand`

### 8.2 发送入口

- `/radar/tx/map_robot_data`
- `/radar/tx/radar_info_forward`
- `/radar/tx/decision_command`

### 8.3 状态话题

- `/radar/status/comm` -> `radar_interfaces/msg/RadarCommStatus`

## 9. `RadarCommStatus` 含义

这个话题用于在线判断链路健康度。关键字段：

- `connected`：当前传输链路是否已连接
- `port`：当前传输端点描述，串口形如 `/dev/ttyACM0 @ 115200`，TCP 形如 `127.0.0.1:10001`
- `rx_bytes / rx_chunks / rx_frames`：接收吞吐
- `tx_frames / tx_failures`：发送情况
- `crc8_failures / crc16_failures`：校验失败次数
- `oversize_frames`：payload 超长帧
- `timeout_drops`：半包超时丢弃次数
- `sync_recoveries`：丢包后重新找回帧同步次数
- `decode_failures`：解码失败次数
- `unknown_cmd_count`：未知命令计数
- `queue_overflows`：发布队列溢出次数
- `serial_disconnects / reconnect_attempts`：链路波动情况
- `parse_exceptions / publish_exceptions`：异常隔离统计
- `last_rx_age_ms`：距最近一次收到字节的时间
- `publish_queue_depth`：当前发布队列深度
- `watchdog_triggered`：最近是否由 watchdog 触发重连

联调时建议先盯这几个字段：

- `connected`
- `last_rx_age_ms`
- `crc16_failures`
- `unknown_cmd_count`
- `publish_queue_depth`

## 10. 常用联调命令

查看状态：

```bash
ros2 topic echo /radar/status/comm
```

TCP 模式示例：

```bash
ros2 run radar_comm serial_node --ros-args \
  -p transport_type:=tcp_client \
  -p tcp_host:=127.0.0.1 \
  -p tcp_port:=10001
```

查看位置：

```bash
ros2 topic echo /radar/rx/enemy/position
```

查看雷达状态：

```bash
ros2 topic echo /radar/rx/radar/info
```

发送 `0x0301 / 0x0121`：

```bash
ros2 topic pub --once /radar/tx/decision_command radar_interfaces/msg/RadarDecisionCommand "{sender_id: 109, receiver_id: 32896, double_vulnerability_request: 1, password_command_type: 2, password: A1B2C3}"
```

发送机器人 ID + 干扰波等级：

```bash
ros2 topic pub --once /radar/tx/radar_info_forward radar_interfaces/msg/RadarInfoForward "{robot_id: 109, encryption_level: 3}"
```

## 11. 原始数据录制

打开录制：

```bash
ros2 run radar_comm serial_node --ros-args \
  -p record_raw:=true \
  -p record_path:=/tmp/radar_serial_raw.bin
```

说明：

- 录制内容是原始传输字节流
- 默认追加写入
- 适合复盘 CRC 错误、链路抖动、未知命令

## 12. Debug / HEX 日志

打开 debug：

```bash
ros2 run radar_comm serial_node --ros-args -p debug_enabled:=true
```

行为：

- 打印 RX HEX
- 打印 TX HEX
- 平时关闭，避免日志量冲击实时性

## 13. 已实现的稳定性策略

- 自动重连
- watchdog 主动拉起重连
- CRC8 / CRC16 失败统计
- 帧同步恢复
- payload 长度防御
- unknown cmd 监控
- 超时丢帧
- 传输线程 / 发布线程解耦
- 异常捕获并计数
- 双缓冲读
- Lock-Free 单生产者单消费者队列

## 14. 当前实现说明

关于“零拷贝设计”，当前版本做到的是：

- 传输回调按批量 buffer 解析，不再逐字节拷贝 payload
- parser 在完整帧 buffer 上直接解码
- 解析成功后只把轻量协议对象推入队列

这已经把热点路径上的多余拷贝压下来了，但它不是 DDS loaned message 那种端到端零拷贝。如果后面你想继续压榨 ROS 层发布开销，可以继续往 `intra-process + loaned message` 方向扩。

## 15. 已知注意事项

- topic 名称已按 `rx / tx / status` 重组，和旧版不完全兼容
- 所有业务消息新增了 `stamp` 字段，需要重新编译依赖包
- CPU 绑定依赖 Linux `pthread_setaffinity_np`
- 原始录制会带来额外磁盘 I/O，比赛时建议按需开启

## 16. 相关文件

- [RadarBridgeNode](/home/moci/radar_serial/src/radar_comm/src/bridge/radar_bridge_node.cpp)
- [ProtocolParser](/home/moci/radar_serial/src/radar_comm/src/protocol/parser.cpp)
- [SerialPort](/home/moci/radar_serial/src/radar_comm/src/transport/serial_port.cpp)
- [serial_node.yaml](/home/moci/radar_serial/src/radar_comm/config/serial_node.yaml)
- [run_radar_serial.sh](/home/moci/radar_serial/src/radar_comm/scripts/run_radar_serial.sh)
