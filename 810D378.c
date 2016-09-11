int sub_810D378()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = get_map_light_from_warp0();
  if ( is_light_level_1_2_3_5_or_6(v0) << 24 )
  {
    RtcCalcLocalTime();
    if ( gUnknown_083F8340[byte_300403A] )
      FlagSet(0x83Au);
    else
      FlagReset(0x83Au);
  }
  return v2;
}
