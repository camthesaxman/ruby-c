int CB2_LinkError()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+4h] [bp-4h]@0

  ResetSpriteData();
  v0 = FreeAllSpritePalettes();
  ResetPaletteFadeControl(v0);
  v1 = FillPalette(0, 0, 2);
  ResetTasks(v1);
  SetVBlankCallback((int)VBlankCB_LinkTest);
  SetUpWindowConfig((int)&gWindowConfig_81E7198);
  v2 = InitMenuWindow(&gWindowConfig_81E7198);
  MenuZeroFillScreen(v2);
  v4000052 = 0;
  v4000012 = 0;
  v4000010 = 0;
  v4000000 = 320;
  gUnknown_3001BB4 = 0;
  v3 = CreateTask(Task_DestroySelf, 0);
  v4 = sub_8074D08(v3);
  RunTasks(v4);
  AnimateSprites();
  v5 = BuildOamBuffer();
  UpdatePaletteFade(v5);
  SetMainCallback2((int)CB2_PrintErrorMessage);
  return v7;
}
