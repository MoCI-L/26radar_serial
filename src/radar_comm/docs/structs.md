
# 雷达通信结构体总览
## 一、结构体总表
| 结构体名称            | cmd_id                | 数据方向           | ROS Topic                                                      | 线载荷长度 |
| --------------------- | --------------------- | ------------------ | -------------------------------------------------------------- | ---------- |
| RadarMarkProgress     | 0x020C                | 下位机/链路 -> 本机 | /radar/rx/radar/mark_progress                                  | 2 B        |
| RadarInfo             | 0x020E                | 下位机/链路 -> 本机 | /radar/rx/radar/info                                            | 1 B        |
| RadarInfoForward      | 0x0301，子命令 0x0122 | 双向               | RX: /radar/rx/radar_info_forward，TX: /radar/tx/radar_info_forward | 5 B     |
| MapRobotData          | 0x0305                | 双向               | RX: /radar/rx/map_robot_data，TX: /radar/tx/map_robot_data      | 48 B       |
| RadarDecisionCommand  | 0x0301，子命令 0x0121 | 双向               | RX: /radar/rx/decision_command，TX: /radar/tx/decision_command | 14 B       |
| EnemyRobotPosition    | 0x0A01                | 下位机/链路 -> 本机 | /radar/rx/enemy/position                                       | 24 B       |
| EnemyRobotHP          | 0x0A02                | 下位机/链路 -> 本机 | /radar/rx/enemy/hp                                             | 12 B       |
| EnemyRemainingAmmo    | 0x0A03                | 下位机/链路 -> 本机 | /radar/rx/enemy/ammo                                           | 10 B       |
| EnemyTeamMacroStatus  | 0x0A04                | 下位机/链路 -> 本机 | /radar/rx/enemy/macro_status                                   | 8 B        |
| EnemyRobotBuffs       | 0x0A05                | 下位机/链路 -> 本机 | /radar/rx/enemy/buffs                                          | 36 B       |
| EnemyInterferenceKey  | 0x0A06                | 下位机/链路 -> 本机 | /radar/rx/enemy/interference_key                               | 6 B        |

## 二、字段摘要表
| 结构体名称            | 主要字段                                                     |
| --------------------- | ------------------------------------------------------------ |
| RadarMarkProgress     | 敌我双方 hero/engineer/infantry_3/infantry_4/aerial/sentry 的标记状态，共 12 个布尔位 |
| RadarInfo             | double_vulnerability_chances、opponent_double_vulnerability_active、encryption_level、key_change_enabled |
| RadarInfoForward      | robot_id、encryption_level |
| MapRobotData          | 敌我双方 hero/engineer/infantry_3/infantry_4/aerial/sentry 的 x,y 坐标，共 24 个 uint16_t |
| RadarDecisionCommand  | sender_id、receiver_id、double_vulnerability_request、password_command_type、password[6] |
| EnemyRobotPosition    | 敌方 hero/engineer/infantry_3/infantry_4/aerial/sentry 的 x,y 坐标 |
| EnemyRobotHP          | 敌方 hero/engineer/infantry_3/infantry_4/sentry 血量，外加 reserved |
| EnemyRemainingAmmo    | 敌方 hero/infantry_3/infantry_4/aerial/sentry 剩余弹药       |
| EnemyTeamMacroStatus  | 金币信息 + 补给区/高地/buff/隧道/道路等宏观占领状态          |
| EnemyRobotBuffs       | 各敌方单位的回血、冷却、攻防增减益，以及哨兵姿态             |
| EnemyInterferenceKey  | 6 字节干扰密钥                                               |
