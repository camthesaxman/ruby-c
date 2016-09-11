int __fastcall sub_80F01E0(unsigned __int16 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuPrint((a1 << 6) + 33589289, 13, 1u);
  if ( v20076AA == 1 )
  {
    MenuPrint(24 * v1 + 33589481, 13, 3u);
    sub_80F443C(33589128, (unsigned int)*(_WORD *)(4 * v20087DC + 0x200893E) << 18 >> 23);
    MenuPrint(33589128, 1, 6u);
  }
  return v3;
}
