int sub_8053E90()
{
  signed int v0; // r4@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int16)sav1_map_get_music();
  v1 = 444;
  if ( v0 != 444 )
  {
    v1 = v2025760;
    if ( v2025760 )
    {
      v0 = v2025760;
    }
    else
    {
      v1 = (unsigned __int8)sav1_map_get_light_level();
      if ( v1 == 5 )
      {
        v0 = 411;
      }
      else
      {
        v1 = TestPlayerAvatarFlags(8) << 24;
        if ( v1 )
          v0 = 365;
      }
    }
  }
  if ( v0 != (unsigned __int16)current_map_music_get(v1) )
    current_map_music_set(v0);
  return v3;
}
