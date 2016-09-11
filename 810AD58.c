int __fastcall sub_810AD58(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  RtcInitLocalTimeOffset(*((_WORD *)v1 + 6), *((_WORD *)v1 + 7));
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  *v1 = (int)sub_810AD9C;
  return v3;
}
