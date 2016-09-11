int __fastcall sub_808A228(unsigned __int8 a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v6; // [sp+8h] [bp-4h]@0

  v4 = a1;
  if ( itemid_is_mail(v203855E, a2, a3, a4) << 24 && v202E8F4 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    dword_3004B20[10 * v4] = (int)sub_808A180;
  }
  else
  {
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    sub_806D538(0, 0);
    dword_3004B20[10 * v4] = (int)sub_8089CD4;
  }
  return v6;
}
