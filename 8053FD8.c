signed int is_warp1_light_level_8_or_9()
{
  int v0; // r0@1
  signed int result; // r0@2

  v0 = warp1_get_mapheader();
  if ( (unsigned __int8)is_light_level_8_or_9(*(_BYTE *)(v0 + 23)) == 1 )
    result = 2;
  else
    result = 4;
  return result;
}
