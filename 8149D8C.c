int __fastcall sub_8149D8C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8149520();
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 19) = 0;
  CpuSet(33746696, 33745672, 48);
  BeginNormalPaletteFade(-458751, 0, 0, 0x10u, 0x7FFF);
  *v2 = (int)sub_8149DEC;
  audio_play(0xCAu);
  return v4;
}
