int __fastcall sub_80AA280(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r5@1
  int v4; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  FillWindowRect_DefaultPalette(33745160, 0, 0, 0, 0x1Eu, 3u);
  StringCopy((_BYTE *)0x2000000, &gUnknown_083C932C);
  StringAppend((_BYTE *)0x2000000, (_BYTE *)((v1 << 6) + 33785213));
  v2 = 0;
  do
  {
    if ( v1 == v2 )
      sub_8003460(33745160, 0x2000000, (655360 * v2 + 0x20000) >> 16, gUnknown_083C926E[2 * v2], byte_83C926F[2 * v2]);
    else
      sub_8003460(
        33745160,
        (v2 << 6) + 33785213,
        (655360 * v2 + 0x20000) >> 16,
        gUnknown_083C926E[2 * v2],
        byte_83C926F[2 * v2]);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return v4;
}
