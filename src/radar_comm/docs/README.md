# RM 雷达通信协议包使用说明

本包依据以下资料实现：

- `RoboMaster 2026 机甲大师高校系列赛通信协议 V1.3.0（20260327）`
- `rule.md`
- `radar.yaml`

当前代码已经补齐仓库内与雷达直接相关的串口协议部分，覆盖：

- `0x020C` 雷达标记进度数据
- `0x020E` 雷达自主决策状态同步
- `0x0305` 选手端小地图接收雷达数据
- `0x0A01` 对方机器人位置坐标
- `0x0A02` 对方机器人血量信息
- `0x0A03` 对方机器人剩余发弹量
- `0x0A04` 对方队伍宏观状态信息
- `0x0A05` 对方机器人当前增益效果
- `0x0A06` 对方干扰波密钥
- `0x0301` 机器人交互数据中的子内容 `0x0121` 雷达自主决策指令

说明：

- `0x0121` 不是顶层 `cmd_id`，而是 `0x0301` 机器人交互数据里的子内容 ID
- 所有 payload 按小端字节序解析和编码
- 只有 CRC8、CRC16 与长度校验都通过的标准帧才会进入协议层

## 1. 目录结构

- `include/radar_comm/protocol`
  - `cmd_id.hpp`：顶层命令 ID 与固定长度定义
  - `types.hpp`：协议结构体和 `ProtocolData`
  - `decoder.hpp` / `encoder.hpp`：负载解码与编码
  - `parser.hpp`：标准 RM 帧流式解析
- `src/bridge/radar_bridge_node.cpp`
  - 串口收发与 ROS2 桥接
- `src/radar_interfaces/msg`
  - 雷达相关 ROS2 消息定义

## 2. 构建

```bash
colcon build --packages-select radar_interfaces radar_comm
source install/setup.bash
```

## 3. 启动串口节点

默认参数文件：

- `src/radar_comm/config/serial_node.yaml`

启动：

```bash
ros2 run radar_comm serial_node --ros-args --params-file src/radar_comm/config/serial_node.yaml
```

也可以直接覆盖串口参数：

```bash
ros2 run radar_comm serial_node --ros-args -p port:=/dev/ttyUSB0 -p baud_rate:=115200
```

支持参数：

- `port`：串口设备名
- `baud_rate`：`115200 / 230400 / 460800 / 921600`
- `reconnect_interval_ms`：断开后自动重连周期

## 4. 接收话题

节点名为 `radar_bridge_node`。收到合法协议帧后会发布：

- `/radar/position`：`radar_interfaces/msg/EnemyPosition`
- `/radar/enemy_hp`：`radar_interfaces/msg/EnemyHP`
- `/radar/ammo`：`radar_interfaces/msg/EnemyAmmo`
- `/radar/macro_status`：`radar_interfaces/msg/MacroStatus`
- `/radar/buff`：`radar_interfaces/msg/Buffs`
- `/radar/key`：`radar_interfaces/msg/InterferenceKey`
- `/radar/mark_progress`：`radar_interfaces/msg/RadarMarkProgress`
- `/radar/info`：`radar_interfaces/msg/RadarInfo`
- `/radar/map_robot_data`：`radar_interfaces/msg/MapRobotData`
- `/radar/decision_command`：`radar_interfaces/msg/RadarDecisionCommand`

其中：

- `0x020C` 中敌方机器人位在标记进度 `>=100` 时为 `true`
- `0x020C` 中己方机器人位在被标记进度 `>=50` 时为 `true`
- `0x020E` 的 `double_vulnerability_chances` 对应 bit `0-1`
- `0x020E` 的 `encryption_level` 对应 bit `3-4`

## 5. 发送话题

当前节点提供两个发送入口：

- `/radar/tx/map_robot_data`：发送 `0x0305`
- `/radar/tx/decision_command`：发送 `0x0301` 包裹的子内容 `0x0121`

约束：

- `RadarDecisionCommand.password` 必须是 6 个 ASCII 字母或数字
- `RadarDecisionCommand.sender_id` / `receiver_id` 需要由上层按协议填写
- `0x0121` 发送时会自动封装 `robot_interaction_data_t` 的 6 字节头部

## 6. 代码中使用协议层

### 6.1 解码串口字节流

```cpp
radar_comm::ProtocolParser parser;

for (uint8_t byte : serial_bytes) {
  auto result = parser.input(byte);
  if (!result.has_value()) {
    continue;
  }

  std::visit([](auto&& msg) {
    using T = std::decay_t<decltype(msg)>;
    if constexpr (std::is_same_v<T, radar_comm::RadarInfo>) {
      // 处理 0x020E
    }
  }, *result);
}
```

### 6.2 组一个 `0x0305` 标准帧

```cpp
radar_comm::MapRobotData data{
  100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200,
  1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400
};

auto frame = radar_comm::encode_frame(data, 1);
```

### 6.3 组一个 `0x0301 / 0x0121` 雷达自主决策指令

```cpp
radar_comm::RadarDecisionCommand cmd{
  109,      // sender_id，示例：蓝方雷达
  0x8080,   // receiver_id，裁判系统服务器
  1,        // 请求双倍易伤计数
  2,        // 2=上传破解到的对方密钥
  {'A', '1', 'B', '2', 'C', '3'}
};

auto frame = radar_comm::encode_frame(cmd, 2);
```

## 7. 联调

### 7.1 假数据发送

```bash
ros2 run radar_comm fake_sender /dev/pts/9
```

`fake_sender` 会持续发送 `0x0A01` 位置帧，便于验证基础接收链路。

### 7.2 查看接收结果

```bash
ros2 topic echo /radar/info
ros2 topic echo /radar/mark_progress
ros2 topic echo /radar/position
```

### 7.3 主动发送雷达数据

```bash
ros2 topic pub --once /radar/tx/decision_command radar_interfaces/msg/RadarDecisionCommand "{sender_id: 109, receiver_id: 32896, double_vulnerability_request: 1, password_command_type: 2, password: A1B2C3}"
```

## 8. 自检

构建后可运行：

```bash
./build/radar_comm/test_parser
```

当前自检会覆盖：

- `0x0A01`
- `0x020C`
- `0x020E`
- `0x0305`
- `0x0301 / 0x0121`

如果成功，会输出：

```text
Parser OK
```

## 9. 当前边界

- 当前实现聚焦 RM 串口协议里与雷达直接相关的部分
- 未继续扩展与雷达无关的常规链路命令
- 未实现 PDF 第 2 章自定义客户端协议中的 MQTT / proto 消息
