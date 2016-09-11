int __fastcall task_intro_2(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  SetVBlankCallback((int)sub_813B784);
  v4000000 = 8000;
  dword_3004B20[10 * v1] = (int)sub_813BCF0;
  dword_3005ED0 = 0;
  m4aSongNumStart(414);
  ResetSerial();
  return v3;
}
