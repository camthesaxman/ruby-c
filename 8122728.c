int __fastcall sub_8122728(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@4
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v202E8F6 != 1 && (word_300179E & 1 || word_300179E & 2) )
  {
    v2 = MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
    sub_8072DEC(v2);
    sub_8122838(v1);
  }
  return v4;
}
