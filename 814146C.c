int __fastcall sub_814146C(unsigned __int8 a1)
{
  int *v1; // r4@2
  int v3; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    BeginNormalPaletteFade(*((_WORD *)v1 + 14) | (*((_WORD *)v1 + 15) << 16), 0, 0x10u, 0, 0x7FFF);
    *v1 = (int)sub_81414BC;
  }
  return v3;
}
