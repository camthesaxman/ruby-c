int sub_8053FF8()
{
  int v0; // r4@1
  int v1; // r0@1
  unsigned __int8 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int16)warp1_target_get_music();
  v1 = (unsigned __int8)FlagGet(16385);
  if ( v1 != 1 && v0 != (unsigned __int16)current_map_music_get(v1) )
  {
    v2 = is_warp1_light_level_8_or_9();
    sub_8074D28(v2);
  }
  return v4;
}
