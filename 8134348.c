int sub_8134348()
{
  int v0; // r1@3
  int v2; // [sp+8h] [bp-4h]@0

  if ( v202888B )
  {
    v2039302 = 0;
    do
      v0 = (unsigned __int8)gUnknown_08402E80[6 * ((unsigned __int16)Random() % 0x14u & 0xFFFF)];
    while ( v2039303 == v0 );
    v2039303 = v0;
  }
  return v2;
}
