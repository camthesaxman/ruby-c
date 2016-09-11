int sub_804B790()
{
  char *v0; // r0@1
  char v1; // r0@3
  int v2; // r0@3
  int v3; // r2@3
  int v4; // r0@3
  char *v5; // r1@4
  int v6; // r0@10
  int v7; // r0@15
  char v9; // [sp+4h] [bp-20h]@3
  int v10; // [sp+20h] [bp-4h]@15

  v0 = (char *)(unsigned __int8)byte_3001BAC;
  if ( (unsigned __int8)byte_3001BAC <= 0xCu )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v20297D8 = v202E8CE;
        v20297D9 = 6;
        StringCopy(&unk_3002978, (_BYTE *)0x2024EA4);
        GetMonData((int)&unk_30045C0, 7, (int)&v9);
        StringCopy(&unk_3002994, &v9);
        v4000000 = 0;
        ResetTasks(0x4000000);
        dword_3004828 = 33681408;
        ResetSpriteData();
        FreeAllSpritePalettes();
        SetVBlankCallback((int)sub_804B210);
        sub_804B228();
        SetUpWindowConfig((int)&gWindowConfig_81E717C);
        InitWindowFromConfig(dword_3004828 + 4, (int)&gWindowConfig_81E717C);
        v1 = SetTextWindowBaseTileNum(2);
        *(_BYTE *)(dword_3004828 + 52) = v1;
        v2 = LoadTextWindowGraphics(dword_3004828 + 4);
        MenuZeroFillScreen(v2);
        gLinkType = 4420;
        *(_BYTE *)(dword_3004828 + 286) = 0;
        v3 = dword_3004828;
        v4 = dword_3004828 + 182;
        *(_WORD *)v4 = 0;
        *(_WORD *)(v4 + 14) = 0;
        *(_WORD *)(v3 + 260) = 64;
        *(_WORD *)(v3 + 262) = 64;
        *(_WORD *)(v3 + 264) = 0;
        *(_WORD *)(v3 + 266) = 0;
        *(_WORD *)(v3 + 268) = 120;
        *(_WORD *)(v3 + 270) = 80;
        *(_WORD *)(v3 + 280) = 256;
        *(_WORD *)(v3 + 284) = 0;
        *(_DWORD *)(v3 + 192) = 0;
        v0 = &byte_3001BAC;
        byte_3001BAC = 5;
        break;
      case 5:
        sub_804B2D0(0, 0, (int)gMain);
        v5 = &byte_3001BAC;
        goto _0804B9D0;
      case 6:
        sub_804B2D0(0, 1, (int)gMain);
        v5 = &byte_3001BAC;
        goto _0804B9D0;
      case 7:
        sub_804B2D0(1u, 0, (int)gMain);
        goto _0804B9CA;
      case 8:
        sub_804B2D0(1u, 1, (int)gMain);
        v5 = &byte_3001BAC;
        goto _0804B9D0;
      case 9:
        sub_804C164();
        LoadSpriteSheet((int)&gUnknown_0821594C);
        LoadSpritePalette((int)&gUnknown_08215954);
        v400000A = 1282;
        v5 = &byte_3001BAC;
        goto _0804B9D0;
      case 0xA:
        ++byte_3001BAC;
        goto _0804B9AA;
      case 0xB:
_0804B9AA:
        sub_804BBE8(5);
        v6 = sub_804BBE8(0);
        sub_804C1A8(v6);
        BeginNormalPaletteFade(-1, 0, 16, 0);
_0804B9CA:
        v5 = &byte_3001BAC;
_0804B9D0:
        v0 = (char *)((unsigned __int8)*v5 + 1);
        *v5 = (char)v0;
        break;
      case 0xC:
        v0 = (char *)(v202F38F & 0x80);
        if ( !(v202F38F & 0x80) )
          v0 = (char *)SetMainCallback2((int)sub_804BBCC);
        break;
      default:
        break;
    }
  }
  RunTasks(v0);
  AnimateSprites();
  v7 = BuildOamBuffer();
  UpdatePaletteFade(v7);
  return v10;
}
