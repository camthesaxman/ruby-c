int sub_80F5BF0()
{
  unsigned int v0; // r6@2
  int v1; // r3@3
  __int16 v2; // r0@3
  int v3; // r2@3
  int v4; // r1@3
  int v6; // [sp+28h] [bp-4h]@0

  if ( v2009344 )
  {
    sub_80F58DC(33591580);
    sub_80F5A1C(33591580);
    v0 = 0;
    do
    {
      v1 = 2 * (v0 + 55);
      v2 = (*(_WORD *)(4 * v0 + 0x2009130) << 8) | *(_WORD *)(4 * v0 + 0x2009132);
      word_3004DE0[v1] = v2;
      word_3005560[v1] = v2;
      v3 = 2 * (v0 + 55) + 1;
      v4 = (*(_WORD *)(4 * v0 + 0x2009238) << 8) | *(_WORD *)(4 * v0 + 0x200923A);
      word_3004DE0[v3] = v4;
      word_3005560[v3] = v4;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 0x41 );
    v2009344 = 0;
  }
  return v6;
}
