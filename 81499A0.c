int __fastcall sub_81499A0(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8149520();
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 19) = 0;
  BeginNormalPaletteFade(3 << *((_WORD *)v2 + 5), 10, 0, 0x10u, 0x7FFF);
  *v2 = (int)sub_81499F0;
  audio_play(0x8Cu);
  return v4;
}
