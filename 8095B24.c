signed int __fastcall sub_8095B24(unsigned __int8 a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@1

  v3 = 0;
  v4 = 2400 * a1;
  do
  {
    if ( !GetBoxMonData((unsigned int *)(v4 + 80 * v3 + 33751204), 11, a3) )
      return (signed __int16)v3;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0x1D );
  return -1;
}
