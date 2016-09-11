int CB2_InitMysteryEventMenu()
{
  int v1; // [sp+4h] [bp-4h]@0

  ResetSpriteData();
  FreeAllSpritePalettes();
  ResetTasks();
  SetVBlankCallback((int)sub_8146900);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow();
  MenuZeroFillScreen();
  v4000000 = 320;
  v4000050 = 0;
  CreateTask((int)Task_DestroySelf, 0);
  sub_8074D08();
  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  FillPalette(0, 0, 2);
  SetMainCallback2((int)sub_81469E4);
  return v1;
}
