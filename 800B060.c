int new_game_prof_birch_speech_part2_start()
{
  int v0; // r0@1
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r3@2
  char *v4; // r1@4
  __int16 v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  int v8; // [sp+14h] [bp-4h]@4

  SetVBlankCallback(0);
  v4000000 = 0;
  v400000C = 0;
  v400000A = 0;
  v4000008 = 0;
  v4000018 = 0;
  v400001A = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v7 = 0;
  v6 = 0;
  v40000D4 = &v6;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  ResetPaletteFade(-2130705920);
  LZ77UnCompVram(&gUnknown_081E768C, 100663296);
  LZ77UnCompVram(&gUnknown_081E7834, 100677632);
  v0 = LoadPalette(&gUnknown_081E764C, 0, 64);
  ResetTasks(v0);
  v1 = (unsigned __int8)CreateTask(task_new_game_prof_birch_speech_part2_1, 0);
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 8) = -60;
  remove_some_task(65476);
  ResetSpriteData();
  FreeAllSpritePalettes();
  AddBirchSpeechObjects(v1);
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow(&gWindowConfig_81E6CE4);
  if ( v2024EAC )
  {
    *((_WORD *)v2 + 10) = 1;
    v3 = *((_BYTE *)v2 + 30);
  }
  else
  {
    *((_WORD *)v2 + 10) = v2024EAC;
    v3 = *((_BYTE *)v2 + 28);
  }
  v4 = &gSprites[68 * v3];
  *((_WORD *)v4 + 16) = 180;
  *((_WORD *)v4 + 17) = 60;
  v4[62] &= 0xFBu;
  LOWORD(dword_3004B20[10 * v1 + 3]) = v3;
  v4000014 = -60;
  BeginNormalPaletteFade(-1, 0, 16, 0);
  v4000040 = 0;
  v4000044 = 0;
  v4000048 = 0;
  v400004A = 0;
  v4000050 = 0;
  v4000052 = 0;
  v4000054 = 0;
  v4000200 |= 1u;
  SetVBlankCallback((int)VBlankCB_MainMenu);
  SetMainCallback2((int)CB2_MainMenu);
  v400000A = 1795;
  v4000000 = 4928;
  return v8;
}
