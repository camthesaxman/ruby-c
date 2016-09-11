int __fastcall sub_808ABF4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    MenuZeroFillWindowRect(1u, 0x11u, 0x1Cu, 0x12u);
    sub_808A918(v1);
  }
  return v3;
}
