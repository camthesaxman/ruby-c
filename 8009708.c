int InitMainMenu()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r1@1
  int result; // r0@1
  __int16 v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1

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
  v5 = 0;
  v4 = 0;
  v40000D4 = &v4;
  v40000D8 = 83886082;
  v40000DC = -2130705921;
  ResetPaletteFade(-2130705921);
  v0 = LoadPalette(&gMainMenuPalette, 0, 32);
  v1 = remove_some_task(v0);
  ResetTasks(v1);
  ResetSpriteData();
  FreeAllSpritePalettes();
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow(&gWindowConfig_81E6CE4);
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
  v4000000 = 12608;
  v2 = 10 * (unsigned __int8)CreateTask(Task_CheckSave, 0);
  result = 0;
  HIWORD(dword_3004B20[v2 + 2]) = 0;
  return result;
}
