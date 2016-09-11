int LinkTestScreen()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  signed int v3; // r4@1
  int v4; // r0@3
  int v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  ResetSpriteData();
  v0 = FreeAllSpritePalettes();
  ResetTasks(v0);
  SetVBlankCallback((int)VBlankCB_LinkTest);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  v1 = InitMenuWindow(&gWindowConfig_81E6CE4);
  ResetBlockSend(v1);
  gLinkType = 4369;
  OpenLink();
  v2 = SeedRng((unsigned __int16)dword_3001790);
  v3 = 0;
  do
  {
    v2 = (unsigned __int8)Random(v2);
    *(_BYTE *)(v3++ + 33705646) = v2;
  }
  while ( v3 <= 3 );
  InitLinkTestBG(0, 2u, 4u, 0);
  v4000000 = 5440;
  v4 = CreateTask(Task_DestroySelf, 0);
  RunTasks(v4);
  AnimateSprites();
  v5 = BuildOamBuffer();
  UpdatePaletteFade(v5);
  sDummy3 = 0;
  InitLocalLinkPlayer();
  CreateTask(Task_PrintTestData, 0);
  SetMainCallback2((int)CB2_LinkTest);
  return v7;
}
