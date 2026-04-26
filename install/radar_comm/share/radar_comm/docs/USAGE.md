# RM 雷达通信协议包使用说明

本包基于以下资料实现：

- `radar.yaml`
- `rule.md`
- `RoboMaster 2026 机甲大师高校系列赛通信协议 V1.3.0（20260327）` 第 `1.6 雷达无线链路数据说明`

当前实现覆盖雷达无线链路的 6 个命令：

- `0x0A01` 对方机器人位置坐标
- `0x0A02` 对方机器人血量信息
- `0x0A03` 对方机器人剩余发弹量
- `0x0A04` 对方队伍宏观状态信息
- `0x0A05` 对方机器人当前增益效果
- `0x0A06` 对方干扰波密钥

## 1. 目录结构

- `include/radar_comm/protocol`
  - `cmd_id.hpp`：命令 ID 与标准长度
  - `crc.hpp`：RM 帧 CRC8 / CRC16
  - `frame.hpp`：帧常量与结构定义
  - `decoder.hpp`：负载解码
  - `encoder.hpp`：负载编码与整帧组包
  - `parser.hpp`：字节流解析器
- `src/bridge/radar_bridge_node.cpp`
  - 串口收包并发布 ROS2 Topic
- `tools/fake_sender.cpp`
  - 按 RM 标准帧发送测试位置包，便于联调

## 2. 构建

在工作区根目录执行：

```bash
colcon build --packages-select radar_interfaces radar_comm
source install/setup.bash
```

## 3. 启动串口节点

默认参数文件：

- `src/radar_comm/config/serial_node.yaml`

启动方式：

```bash
ros2 run radar_comm serial_node --ros-args --params-file src/radar_comm/config/serial_node.yaml
```

也可以直接覆盖参数：

```bash
ros2 run radar_comm serial_node --ros-args -p port:=/dev/ttyUSB0 -p baud_rate:=115200
```

节点会自动重连串口，参数如下：

- `port`：串口设备名
- `baud_rate`：波特率，当前串口封装支持 `115200 / 230400 / 460800 / 921600`
- `reconnect_interval_ms`：断开后重连周期

## 4. 发布的话题

节点名为 `radar_bridge_node`，收到合法 RM 雷达包后发布：

- `/radar/position`：`radar_interfaces/msg/EnemyPosition`
- `/radar/enemy_hp`：`radar_interfaces/msg/EnemyHP`
- `/radar/ammo`：`radar_interfaces/msg/EnemyAmmo`
- `/radar/macro_status`：`radar_interfaces/msg/MacroStatus`
- `/radar/buff`：`radar_interfaces/msg/Buffs`
- `/radar/key`：`radar_interfaces/msg/InterferenceKey`

注意：

- 位置字段保持协议原始单位 `cm`
- 所有 payload 按小端字节序解析
- 只有 CRC8、CRC16 和 payload 长度都正确的包才会被发布

## 5. 代码中如何使用协议层

### 5.1 解码串口字节流

```cpp
radar_comm::ProtocolParser parser;

for (uint8_t byte : serial_bytes) {
  auto result = parser.input(byte);
  if (!result.has_value()) {
    continue;
  }

  std::visit([](auto&& msg) {
    using T = std::decay_t<decltype(msg)>;
    if constexpr (std::is_same_v<T, radar_comm::EnemyRobotPosition>) {
      // 处理 0x0A01
    }
  }, *result);
}
```

### 5.2 组一个标准 RM 雷达帧

```cpp
radar_comm::EnemyRobotPosition pos{
  100, 200, 300, 400, 500, 600,
  700, 800, 900, 1000, 1100, 1200
};

auto payload = radar_comm::encode_payload(pos);
auto frame = radar_comm::encode_frame(
    radar_comm::CmdID::EnemyRobotPosition, payload, 1);
```

`frame` 即完整标准格式：

```text
SOF(0xA5) | data_length(2B) | seq(1B) | CRC8(1B) | cmd_id(2B) | payload | CRC16(2B)
```

## 6. 联调方法

### 方法 A：直接发假数据

先启动节点监听某个伪串口，再运行：

```bash
ros2 run radar_comm fake_sender /dev/pts/9
```

`fake_sender` 会以 `10Hz` 连续发送 `0x0A01` 位置数据包，使用真实 RM CRC 算法。

### 方法 B：查看解析结果

```bash
ros2 topic echo /radar/position
ros2 topic echo /radar/enemy_hp
ros2 topic echo /radar/key
```

## 7. 自检工具

构建后可运行：

```bash
ros2 run radar_comm test_parser
```

如果编码和解码链路正确，会输出：

```text
Parser OK
```

串口联调工具：

```bash
ros2 run radar_comm test_serial
```

它会打印串口原始字节，并在成功解出一帧后显示数据类型。

## 8. 当前实现边界

- 当前协议包聚焦 `1.6 雷达无线链路`
- 未实现裁判系统常规链路 `0x0305`、`0x0121` 等其他命令
- `ProtocolData` 目前只包含雷达无线链路 6 类数据

如果你后面还要继续接 `0x0121` 雷达自主决策指令或发给服务器的密钥上报，我可以在这套包上继续补“发送侧命令封装 + ROS2 service/topic 接口”。
