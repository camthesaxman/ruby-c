int __fastcall sub_80F0A24(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r5@1
  signed int v3; // r2@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a2;
  v3 = 1;
  if ( !v20087C8 )
    v3 = 2;
  sub_80F4428(33589128, a1, v3);
  BasicInitMenuWindow((int)&gWindowConfig_81E70D4);
  MenuPrint(33589128, 13, v2);
  return v5;
}
