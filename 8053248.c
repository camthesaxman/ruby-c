int get_mapdata_header()
{
  int result; // r0@2

  if ( v2025766 )
    result = (int)*(&gMapAttributes + v2025766 - 1);
  else
    result = 0;
  return result;
}
