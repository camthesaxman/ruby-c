int __fastcall sub_808AAF0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v202E8F6 != 1 && (word_300179E & 1 || word_300179E & 2) )
  {
    MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
    sub_808A918(v1);
  }
  return v3;
}
