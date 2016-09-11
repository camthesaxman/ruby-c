int sub_804F0F4()
{
  int v0; // r0@1
  int v1; // r2@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v4000000 = 0;
  ResetSpriteData();
  v0 = FreeAllSpritePalettes();
  ResetTasks(v0);
  SetVBlankCallback((int)sub_804E2BC);
  SetUpWindowConfig((int)&gWindowConfig_81E6F68);
  InitMenuWindow(&gWindowConfig_81E6F68);
  gLinkType = 17442;
  v1 = dword_3004854;
  v2 = dword_3004854 + 78;
  *(_WORD *)v2 = 0;
  v2 += 8;
  *(_WORD *)v2 = 0;
  v2 -= 2;
  *(_WORD *)v2 = 0;
  *(_WORD *)(v2 + 6) = 0;
  *(_WORD *)(v1 + 324) = 0;
  *(_WORD *)(v1 + 326) = 0;
  ++*(_BYTE *)v1;
  return v4;
}
