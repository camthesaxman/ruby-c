int sub_813EEE4()
{
  int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v4000000 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000018 = 0;
  v400001A = 0;
  v400001C = 0;
  v400001E = 0;
  ResetSpriteData();
  FreeAllSpritePalettes();
  sub_80FA8EC(33554440, 0);
  sub_80FBCF0(0, 0);
  sub_80FBB3C(1, 1);
  SetUpWindowConfig((int)&gWindowConfig_81E709C);
  InitMenuWindow();
  MenuZeroFillScreen();
  v4000008 = 7936;
  MenuDrawTextWindow(0x15u, 0);
  sub_8072BD8(&gUnknown_0842C5B5, 22, 1u, 0x38u);
  v0 = MenuDrawTextWindow(0x10u, 0x10u);
  sub_813F0C8(v0);
  SetMainCallback2((int)sub_813EFC4);
  SetVBlankCallback((int)sub_813EFB0);
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  return v2;
}
