int unref_sub_80524BC()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  ResetSpriteData();
  v0 = FreeAllSpritePalettes();
  ResetTasks(v0);
  SetVBlankCallback((int)sub_804E2D8);
  SetUpWindowConfig((int)&gWindowConfig_81E6CE4);
  InitMenuWindow(&gWindowConfig_81E6CE4);
  SeedRng((unsigned __int16)dword_3001790);
  v4000000 = 5440;
  RunTasks(5440);
  AnimateSprites();
  v1 = BuildOamBuffer();
  UpdatePaletteFade(v1);
  word_300057A = 8000;
  ++byte_3000570;
  SetMainCallback2((int)sub_8052AF8);
  return v3;
}
