int sub_80F0900()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = (v2008772 - v2008770 + 1) << 16;
  if ( (signed __int16)(v2008772 - v2008770 + 1) <= 7 )
    MenuZeroFillWindowRect(0xCu, 1u, 0x1Fu, 0xFu);
  sub_80F0954(v2008770, 0, v0 >> 16);
  return v2;
}
