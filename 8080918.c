int sub_8080918()
{
  int v0; // r4@1
  int v1; // r0@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)sav1_map_get_light_level();
  v1 = warp1_get_mapheader();
  v2 = (unsigned __int8)sub_810CDB8(v0, *(_BYTE *)(v1 + 23));
  if ( v2 )
  {
    if ( v2 == 1 )
      fade_screen(3, 0);
  }
  else
  {
    fade_screen(1, 0);
  }
  return v4;
}
