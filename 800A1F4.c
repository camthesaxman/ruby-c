int __fastcall Task_Birch1(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int *v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow(&gWindowConfig_81E6CE4);
  v4000040 = 0;
  v4000044 = 0;
  v4000048 = 0;
  v400004A = 0;
  v4000050 = 0;
  v4000052 = 0;
  v4000054 = 0;
  LZ77UnCompVram(&gUnknown_081E768C, 100663296);
  LZ77UnCompVram(&gUnknown_081E7834, 100677632);
  LoadPalette(&gUnknown_081E764C, 0, 64);
  v2 = LoadPalette(&gUnknown_081E796C, 1, 16);
  remove_some_task(v2);
  ResetSpriteData();
  FreeAllSpritePalettes();
  AddBirchSpeechObjects(v1);
  BeginNormalPaletteFade(-1, 0, 16, 0);
  v400000A = 1795;
  v4000000 = 4928;
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 8) = 0;
  *v3 = (int)task_new_game_prof_birch_speech_2;
  *((_WORD *)v3 + 6) = 255;
  *((_WORD *)v3 + 7) = 255;
  *((_WORD *)v3 + 11) = 216;
  sub_8075474(374);
  return v5;
}
