int sub_8053F0C()
{
  unsigned int v0; // r0@2
  signed int v1; // r5@2
  int v2; // r4@2
  int v4; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)FlagGet(16385) != 1 )
  {
    v0 = warp1_target_get_music() << 16;
    v1 = v0 >> 16;
    v2 = (unsigned __int16)current_map_music_get(v0);
    if ( v1 != 444 )
    {
      if ( v2 == 411 || v2 == 365 )
        return v4;
      if ( TestPlayerAvatarFlags(8) << 24 )
        v1 = 365;
    }
    if ( v1 != v2 )
    {
      if ( TestPlayerAvatarFlags(6) << 24 )
        sub_8074D94(v1, 4, 4);
      else
        sub_8074D60(v1, 8);
    }
  }
  return v4;
}
