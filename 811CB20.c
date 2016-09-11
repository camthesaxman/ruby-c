int __fastcall sub_811CB20(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  __int16 v3; // r3@3
  unsigned int v4; // r5@7
  __int16 *v5; // r3@8
  int v6; // r0@9

  v1 = a1;
  v200C000 = 0;
  v2 = (*(_WORD *)(a1 + 12) << 16 >> 24) + *(_WORD *)(a1 + 10);
  *(_WORD *)(v1 + 10) = v2;
  if ( (signed __int16)v2 > 240 )
    *(_WORD *)(v1 + 10) = 240;
  v3 = *(_WORD *)(v1 + 14);
  if ( (signed int)*(_WORD *)(v1 + 12) <= 4095 )
    *(_WORD *)(v1 + 12) += v3;
  if ( v3 <= 127 )
    *(_WORD *)(v1 + 14) = 2 * v3;
  v4 = 0;
  do
  {
    v5 = &word_3004DE0[v4];
    if ( v4 & 1 )
    {
      *v5 = *(_WORD *)(v1 + 10) + v200C014;
      LOWORD(v6) = 240 - *(_WORD *)(v1 + 10);
    }
    else
    {
      *v5 = v200C014 - *(_WORD *)(v1 + 10);
      v6 = (*(_WORD *)(v1 + 10) << 8) | 0xF1;
    }
    word_3004F20[v4] = v6;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0x9F );
  if ( (signed int)*(_WORD *)(v1 + 10) > 239 )
    ++*(_WORD *)(v1 + 8);
  ++v200C000;
  return 0;
}
