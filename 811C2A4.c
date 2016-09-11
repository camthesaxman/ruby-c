int __fastcall sub_811C2A4(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r7@1
  int v3; // r5@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@2
  unsigned int v6; // r2@2
  int v7; // r0@8
  int v8; // r2@8
  __int16 v9; // r1@13

  v1 = a1;
  v200C000 = 0;
  v2 = word_3004DE0;
  v3 = *(_BYTE *)(a1 + 10);
  *(_WORD *)(a1 + 10) += 16;
  v4 = 0;
  do
  {
    v5 = (sine(v3, 16) + *(_WORD *)(v1 + 12)) << 16;
    v6 = v5 >> 16;
    if ( (v5 & 0x80000000) != 0 )
      LOWORD(v6) = 1;
    if ( (signed __int16)v6 > 240 )
      LOWORD(v6) = 240;
    *v2 = v6;
    v4 = (v4 + 1) & 0xFF;
    ++v2;
    v3 = (v3 + 16) & 0xFF;
  }
  while ( v4 <= 0x4F );
  for ( ; v4 <= 0x9F; v3 = (v3 + 16) & 0xFF )
  {
    v7 = sine(v3, 16);
    v8 = (*(_WORD *)(v1 + 14) - v7) & 0xFFFF;
    if ( (*(_WORD *)(v1 + 14) - v7) & 0x8000 )
      v8 = 0;
    if ( (signed __int16)v8 > 239 )
      v8 = 239;
    *v2 = (v8 << 16 >> 8) | 0xF0;
    v4 = (v4 + 1) & 0xFF;
    ++v2;
  }
  v9 = *(_WORD *)(v1 + 12) + 8;
  *(_WORD *)(v1 + 12) = v9;
  *(_WORD *)(v1 + 14) -= 8;
  if ( v9 > 240 )
    *(_WORD *)(v1 + 12) = 240;
  if ( (signed int)*(_WORD *)(v1 + 14) < 0 )
    *(_WORD *)(v1 + 14) = 0;
  if ( *(_DWORD *)(v1 + 12) == 240 )
    ++*(_WORD *)(v1 + 8);
  v200C018 -= 8;
  v200C01A += 8;
  ++v200C000;
  return 0;
}
