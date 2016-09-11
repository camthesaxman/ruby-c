int __fastcall sub_80F5CDC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r5@2
  unsigned int v3; // r7@2
  __int16 v4; // r0@3
  int v5; // r2@3
  int v6; // r1@3
  int v8; // [sp+28h] [bp-4h]@0

  v1 = a1;
  if ( v2009344 )
  {
    sub_80F58DC(33591580);
    sub_80F5A1C(33591580);
    v2 = 2 * (55 - v1) & 0xFFFF;
    v3 = 0;
    do
    {
      v4 = (*(_WORD *)(4 * v3 + 0x2009130) << 8) | *(_WORD *)(4 * v3 + 0x2009132);
      word_3004DE0[v2] = v4;
      word_3005560[v2] = v4;
      v5 = v2 + 1;
      v6 = (*(_WORD *)(4 * v3 + 0x2009238) << 8) | *(_WORD *)(4 * v3 + 0x200923A);
      word_3004DE0[v5] = v6;
      word_3005560[v5] = v6;
      v2 = (v2 + 2) & 0xFFFF;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 0x41 );
    v2009344 = 0;
  }
  return v8;
}
