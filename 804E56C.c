int sub_804E56C()
{
  unsigned int v0; // r0@1
  int v1; // r2@3
  signed int v2; // r4@5
  char *v3; // r5@5
  char v4; // r0@6
  int v5; // r0@8
  int v6; // r0@17
  int v8; // [sp+10h] [bp-4h]@0

  v0 = *(_BYTE *)dword_3004854;
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        v4000000 = 0;
        ResetSpriteData();
        FreeAllSpritePalettes();
        SetVBlankCallback(0);
        SetUpWindowConfig((int)&gWindowConfig_81E6F68);
        InitMenuWindow(&gWindowConfig_81E6F68);
        ++*(_BYTE *)dword_3004854;
        v1 = dword_3004854;
        *(_WORD *)(dword_3004854 + 320) = 0;
        *(_WORD *)(v1 + 318) = 0;
        *(_WORD *)(v1 + 322) = 80;
        *(_WORD *)(v1 + 324) = 0;
        *(_WORD *)(v1 + 326) = 0;
        *(_BYTE *)(v1 + 1) = 0;
        sub_8051474(v1 + 326);
        break;
      case 1u:
        if ( sub_804E2EC() << 24 )
        {
          v2 = 0;
          v3 = &gUnknown_082162E4;
          do
          {
            v4 = CreateSprite((int)&gSpriteTemplate_82163F4, (unsigned __int8)*v3, (unsigned __int8)v3[1]);
            *(_BYTE *)(dword_3004854 + 92 + v2) = v4;
            StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 92 + v2)], v2 + 8);
            v3 += 2;
            ++v2;
          }
          while ( v2 <= 3 );
          SetVBlankCallback((int)sub_804E2BC);
          goto _0804E6BE;
        }
        break;
      case 2u:
        v5 = BeginNormalPaletteFade(-1, 0, 16, 0);
        sub_8051474(v5);
        goto _0804E6BE;
      case 3u:
        sub_804E4FC();
        if ( !(v202F38F & 0x80) )
          goto _0804E6BE;
        break;
      case 4u:
        MenuDrawTextWindow(0, 14, 29, 19);
        MenuPrintMessage("ÍèÕæèİâÛ", 1, 15);
_0804E6BE:
        ++*(_BYTE *)dword_3004854;
        break;
      case 5u:
        if ( MenuUpdateWindowText() << 24 )
        {
          ++*(_BYTE *)dword_3004854;
          BeginNormalPaletteFade(-1, 0, 0, 16);
        }
        break;
      case 6u:
        if ( !(v202F38F & 0x80) )
        {
          sub_80A6978();
          *(_BYTE *)dword_3004854 = 0;
        }
        break;
      default:
        break;
    }
  }
  AnimateSprites();
  v6 = BuildOamBuffer();
  UpdatePaletteFade(v6);
  return v8;
}
