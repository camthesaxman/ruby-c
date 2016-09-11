int __fastcall sub_8133E74(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !v202E8F6 )
  {
    MenuZeroFillWindowRect(3u, 0xEu, 0x1Au, 0x13u);
    sub_806D538(3u, 0);
    dword_3004B20[10 * v1] = (int)sub_806CB74;
  }
  return v3;
}
