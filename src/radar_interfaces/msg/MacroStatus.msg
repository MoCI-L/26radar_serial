builtin_interfaces/Time stamp

# 对方队伍宏观状态
uint16 remaining_gold
uint16 total_gold

# 以下为位域展开的状态字段
bool enemy_supply_area_occupied
uint8 enemy_central_highland_status      # 0=未占领，1=对方占领，2=我方占领
bool enemy_trapezoid_highland_occupied
uint8 enemy_fort_buff_status             # 0=未占领，1=对方，2=我方，3=双方
uint8 enemy_outpost_buff_status          # 0=未占领，1=对方，2=我方
bool enemy_base_buff_occupied
bool enemy_tunnel_pre_jump_occupied
bool enemy_tunnel_post_jump_occupied
bool ally_side_tunnel_pre_jump_occupied
bool ally_side_tunnel_post_jump_occupied
bool enemy_highland_upper_occupied
bool enemy_jump_upper_occupied
bool enemy_road_upper_occupied
