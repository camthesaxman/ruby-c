int sub_810F85C()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = get_map_light_from_warp0();
  if ( (unsigned __int8)is_light_level_1_2_3_5_or_6(v0) != 1 )
    sub_80806B4(0x15u);
  return v2;
}
