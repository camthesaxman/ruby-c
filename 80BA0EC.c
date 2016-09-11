int unref_sub_80BA0EC()
{
  int *v0; // r1@1
  __int16 v2; // [sp+4h] [bp-18h]@1
  int v3; // [sp+8h] [bp-14h]@1
  int v4; // [sp+18h] [bp-4h]@1

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
  v3 = 0;
  v2 = 0;
  v40000D4 = &v2;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  ResetPaletteFade();
  ResetTasks();
  ResetSpriteData();
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow();
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000040 = 0;
  v4000044 = 0;
  v4000042 = 0;
  v4000046 = 0;
  v4000048 = 4369;
  v400004A = 49;
  v4000050 = 225;
  v4000052 = 0;
  v4000054 = 7;
  v4000200 = 1;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_80BA0C0);
  SetMainCallback2((int)sub_80BA0A8);
  v4000000 = 28992;
  v0 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80BA258, 0)];
  *((_WORD *)v0 + 4) = 0;
  *((_WORD *)v0 + 5) = 0;
  *((_WORD *)v0 + 6) = 0;
  *((_WORD *)v0 + 7) = 0;
  v20387B0 = 0;
  *((_WORD *)v0 + 7) = 0;
  m4aSoundInit(33785776);
  return v4;
}
