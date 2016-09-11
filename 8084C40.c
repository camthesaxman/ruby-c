signed int wild_pokemon_rand_water()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r1@1
  signed int result; // r0@2

  v0 = (unsigned __int16)Random() % 0x64u << 24;
  v1 = v0 >> 24;
  if ( v0 >> 24 > 0x3B )
  {
    if ( ((v1 - 60) & 0xFF) > 0x1D )
    {
      if ( ((v1 - 90) & 0xFF) > 4 )
      {
        if ( (((v0 >> 24) - 95) & 0xFF) <= 3 )
          result = 3;
        else
          result = 4;
      }
      else
      {
        result = 2;
      }
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
