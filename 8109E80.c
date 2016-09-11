int sub_8109E80()
{
  unsigned __int8 v0; // r0@1
  __int16 v1; // r4@1
  char *v2; // r1@1
  char *v3; // r1@1
  char *v4; // r1@1
  __int16 v6; // [sp+4h] [bp-24h]@1
  int v7; // [sp+8h] [bp-20h]@1
  int v8; // [sp+24h] [bp-4h]@1

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
  v7 = 0;
  v6 = 0;
  v40000D4 = &v6;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  LZ77UnCompVram(&gUnknown_083F66F0, 100663296);
  LZ77UnCompVram(&gBirchBagTilemap, 100675584);
  LZ77UnCompVram(&gBirchGrassTilemap, 100677632);
  remove_some_task();
  ResetTasks();
  ResetSpriteData();
  ResetPaletteFade();
  FreeAllSpritePalettes();
  LoadPalette((int)&gUnknown_083F62EC, 0, 64);
  LoadCompressedObjectPic((_DWORD *)"˜q?\b");
  LoadCompressedObjectPic((_DWORD *)"¸t?\b");
  LoadSpritePalettes((int)",c?\b");
  SetUpWindowConfig((int)&gWindowConfig_81E6C3C);
  InitMenuWindow();
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000200 |= 1u;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_8109E6C);
  SetMainCallback2((int)sub_810A11C);
  v4000048 = 63;
  v400004A = 31;
  v4000040 = 0;
  v4000044 = 0;
  v4000050 = 254;
  v4000052 = 0;
  v4000054 = 7;
  v400000E = 1795;
  v400000C = 1538;
  v4000008 = 7944;
  v4000000 = 15680;
  v0 = CreateTask((int)sub_810A134, 0);
  v1 = v0;
  LOWORD(dword_3004B20[10 * v0 + 2]) = 1;
  *(_WORD *)&gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F77CC, 120, 56) + 46] = v0;
  v2 = &gSprites[68
               * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F77E4, (unsigned __int8)gUnknown_083F76B8, 64)];
  *((_WORD *)v2 + 23) = v1;
  *((_WORD *)v2 + 24) = 0;
  v3 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F77E4, 120, 88)];
  *((_WORD *)v3 + 23) = v1;
  *((_WORD *)v3 + 24) = 1;
  v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83F77E4, 180, 64)];
  *((_WORD *)v4 + 23) = v1;
  *((_WORD *)v4 + 24) = 2;
  return v8;
}
