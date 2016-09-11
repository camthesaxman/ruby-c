int sub_8134394()
{
  unsigned int v0; // r4@1
  int v1; // r1@5
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( (Random() << 16) & 0xF0000 )
  {
    if ( v202888B )
    {
      while ( v2039303 != (unsigned __int8)gUnknown_08402E80[6 * v0] )
      {
        v0 = (v0 + 1) & 0xFF;
        if ( v0 > 0x13 )
          return v3;
      }
      do
      {
        do
          v1 = (unsigned __int8)*(&gUnknown_08402E80[6 * v0 + 1] + ((unsigned __int16)Random() % 5u & 0xFFFF));
        while ( !v2039300 && v2039301 == v1 );
      }
      while ( v1 == 255 );
      v2039303 = v1;
    }
  }
  else
  {
    sub_8134348();
  }
  return v3;
}
