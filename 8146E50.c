int sub_8146E50()
{
  __int16 v1; // [sp+4h] [bp-24h]@3
  int v2; // [sp+8h] [bp-20h]@3
  int v3; // [sp+24h] [bp-4h]@6

  if ( byte_3001BAC && byte_3001BAC == 1 )
  {
    if ( !(UpdatePaletteFade() << 24) )
    {
      SetMainCallback2((int)sub_8147048);
      SetVBlankCallback((int)sub_8147218);
    }
  }
  else
  {
    SetVBlankCallback(0);
    v4000000 = 0;
    v400000E = 0;
    v400000C = 0;
    v400000A = 0;
    v4000008 = 0;
    v400001C = 0;
    v400001E = 0;
    v4000018 = 0;
    v400001A = 0;
    v4000014 = 0;
    v4000016 = 0;
    v4000010 = 0;
    v4000012 = 0;
    v2 = 0;
    v1 = 0;
    v40000D4 = &v1;
    v40000D8 = 83886080;
    v40000DC = -2130705920;
    LZ77UnCompVram(&gUnknown_083F66F0, 100663296);
    LZ77UnCompVram(&gBirchBagTilemap, 100675584);
    LZ77UnCompVram(&gBirchGrassTilemap, 100677632);
    LZ77UnCompVram(&gUnknown_08411980, 100728864);
    ResetSpriteData();
    ResetTasks();
    ResetPaletteFade();
    LoadPalette((int)&gUnknown_083F62EC, 0, 64);
    LoadPalette((int)&gUnknown_08411960, 256, 32);
    SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
    InitMenuWindow();
    MenuDrawTextWindow(0xDu, 8u);
    MenuDrawTextWindow(1u, 0xCu);
    MenuPrint((int)"อีู๊", 2, 0xDu);
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
    v4000200 |= 1u;
    v4000004 |= 8u;
    SetVBlankCallback((int)sub_8146E3C);
    v400000E = 1795;
    v400000C = 1538;
    v4000008 = 7944;
    v4000000 = 7488;
    ++byte_3001BAC;
  }
  return v3;
}
