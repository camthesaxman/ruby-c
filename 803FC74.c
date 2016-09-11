unsigned int __fastcall nature_stat_mod(unsigned __int8 a1, unsigned __int16 a2, int a3)
{
  int v3; // r3@1
  unsigned int v4; // r2@1
  int v6; // r1@3
  signed int v7; // r0@5

  v3 = a2;
  v4 = a3 << 24;
  if ( (v4 - 0x1000000) >> 24 > 4 )
    return a2;
  v6 = *(&gNatureStatTable[5 * a1 - 1] + (v4 >> 24));
  if ( v6 == -1 )
  {
    v7 = 90;
    return (v7 * v3 & 0xFFFFu) / 0x64 & 0xFFFF;
  }
  if ( v6 == 1 )
  {
    v7 = 110;
    return (v7 * v3 & 0xFFFFu) / 0x64 & 0xFFFF;
  }
  return v3;
}
