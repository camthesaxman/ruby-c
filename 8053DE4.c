signed int sav1_map_get_music()
{
  signed int result; // r0@3
  signed int v1; // r1@4

  if ( v2025738 != 6656 || (sav1_get_weather_probably() & 0xFF) != 8 )
  {
    v1 = (unsigned __int16)sub_8053D9C(33707832);
    if ( v1 == 0x7FFF )
    {
      if ( v2025734 <= 23 )
        result = 360;
      else
        result = 402;
    }
    else
    {
      result = v1;
    }
  }
  else
  {
    result = 409;
  }
  return result;
}
