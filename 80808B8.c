int pal_fill_for_maplights()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)get_map_light_from_warp0();
  v1 = sav1_map_get_light_level();
  v2 = (unsigned __int8)fade_type_for_given_maplight_pair(v0, v1);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      fade_screen(2, 0);
      palette_bg_faded_fill_black();
    }
  }
  else
  {
    fade_screen(0, 0);
    palette_bg_faded_fill_white();
  }
  return v4;
}
