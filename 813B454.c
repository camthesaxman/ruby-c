int __fastcall sub_813B454(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    sub_80F890C(36 * (v201FE00 + 6 + v201FE02) + 33718912, (int)sub_813B4F0, 1);
    DestroyTask(v1);
  }
  return v3;
}
