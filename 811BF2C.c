int __fastcall sub_811BF2C(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r7@1
  __int16 v3; // r0@1
  int v4; // r5@1
  unsigned int v5; // r6@1
  signed int v6; // r8@1
  unsigned int v7; // r0@2
  unsigned int v8; // r1@2

  v1 = a1;
  v200C000 = 0;
  v2 = word_3004DE0;
  v3 = *(_WORD *)(a1 + 12);
  v4 = (unsigned __int8)v3;
  *(_WORD *)(v1 + 12) = v3 + 16;
  *(_WORD *)(v1 + 10) += 8;
  v5 = 0;
  v6 = 1;
  do
  {
    v7 = (sine(v4, 40) + *(_WORD *)(v1 + 10)) << 16;
    v8 = v7 >> 16;
    if ( (v7 & 0x80000000) != 0 )
      LOWORD(v8) = 0;
    if ( (signed __int16)v8 > 240 )
      LOWORD(v8) = 240;
    *v2 = ((_WORD)v8 << 8) | 0xF1;
    if ( (signed __int16)v8 <= 239 )
      v6 = 0;
    v5 = (v5 + 1) & 0xFF;
    v4 = (v4 + 4) & 0xFF;
    ++v2;
  }
  while ( v5 <= 0x9F );
  if ( v6 )
    ++*(_WORD *)(v1 + 8);
  ++v200C000;
  return 0;
}
