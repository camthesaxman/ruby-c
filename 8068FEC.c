int sub_8068FEC()
{
  char v0; // r0@1
  signed __int16 v2; // [sp+0h] [bp-10h]@1

  player_get_direction_upper_nybble();
  player_get_pos_to_and_height((int)&v2);
  MapGridGetMetatileBehaviorAt(v2, *(&v2 + 1));
  v0 = map_warp_check_packed(33744936, &v2);
  sub_8068C30(33744936, v0, (int)&v2);
  return 0;
}
