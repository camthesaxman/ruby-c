int sub_81327A4()
{
  signed int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  ResetSpriteData();
  FreeAllSpritePalettes();
  ResetTasks();
  dword_30007B0 = 33648640;
  sub_8133558();
  *(_BYTE *)(dword_30007B0 + 710) = v202E8CE;
  SetVBlankCallback((int)sub_813265C);
  SetUpWindowConfig((int)&gWindowConfig_81E7240);
  InitMenuWindow();
  MenuZeroFillScreen();
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow();
  MenuZeroFillScreen();
  v4000000 = 4928;
  v4000012 = 0;
  v4000010 = 0;
  v4000014 = 0;
  LoadSpriteSheet((int)&gUnknown_08402D80);
  v0 = LoadSpritePalette((int)&gUnknown_08402D88);
  sub_8133358(v0);
  FillPalette(0, 0, 2);
  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  SetMainCallback2((int)sub_8132870);
  return v2;
}
