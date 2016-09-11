int sub_804B41C()
{
  unsigned int v0; // r0@1
  char v1; // r0@3
  int v2; // r0@3
  int v3; // r1@3
  int v4; // r0@3
  int v5; // r3@3
  _DWORD *v6; // r1@5
  char *v7; // r1@6
  unsigned int v8; // r4@8
  int v9; // r0@20
  int v10; // r0@25
  int v12; // [sp+10h] [bp-4h]@0

  v0 = (unsigned __int8)byte_3001BAC;
  if ( (unsigned __int8)byte_3001BAC <= 0xCu )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        v4000000 = 0;
        ResetTasks(0);
        CloseLink();
        dword_3004828 = 33681408;
        ResetSpriteData();
        FreeAllSpritePalettes();
        SetVBlankCallback((int)sub_804B210);
        sub_804B228();
        SetUpWindowConfig((int)&gWindowConfig_81E6F84);
        InitWindowFromConfig(dword_3004828 + 4, (int)&gWindowConfig_81E6F84);
        v1 = SetTextWindowBaseTileNum(2);
        *(_BYTE *)(dword_3004828 + 52) = v1;
        v2 = LoadTextWindowGraphics(dword_3004828 + 4);
        MenuZeroFillScreen(v2);
        gLinkType = 4420;
        ++byte_3001BAC;
        LZDecompressVram((int)&gUnknown_08D00000, 100663296);
        CpuSet(&gUnknown_08D00524, 0x2000000, 2048);
        v40000D4 = 0x2000000;
        v40000D8 = 100673536;
        v40000DC = -2147483008;
        LoadCompressedPalette(&gUnknown_08D004E0, 0, 32);
        v3 = dword_3004828;
        v4 = dword_3004828 + 182;
        *(_WORD *)v4 = 0;
        *(_WORD *)(v4 + 14) = 0;
        *(_BYTE *)(v3 + 286) = 1;
        v5 = dword_3004828;
        *(_WORD *)(dword_3004828 + 260) = 64;
        *(_WORD *)(v5 + 262) = 64;
        *(_WORD *)(v5 + 264) = 0;
        *(_WORD *)(v5 + 266) = 0;
        *(_WORD *)(v5 + 268) = 120;
        *(_WORD *)(v5 + 270) = 80;
        *(_WORD *)(v5 + 280) = 256;
        v0 = v5 + 284;
        *(_WORD *)(v5 + 284) = 0;
        break;
      case 1:
        OpenLink();
        ++byte_3001BAC;
        v0 = dword_3004828 + 192;
        *(_DWORD *)(dword_3004828 + 192) = 0;
        break;
      case 2:
        v6 = (_DWORD *)(dword_3004828 + 192);
        v0 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v0;
        if ( v0 > 0x3C )
        {
          *v6 = 0;
          v7 = &byte_3001BAC;
          goto _0804B74C;
        }
        break;
      case 3:
        if ( !(IsLinkMaster() << 24) )
          goto _0804B746;
        v8 = GetLinkPlayerCount_2();
        v0 = sub_800820C() << 24;
        if ( v8 << 24 >= v0 )
        {
          v0 = *(_DWORD *)(dword_3004828 + 192) + 1;
          *(_DWORD *)(dword_3004828 + 192) = v0;
          if ( v0 > 0x1E )
          {
            sub_8007F4C();
            v7 = &byte_3001BAC;
            goto _0804B74C;
          }
        }
        break;
      case 4:
        sub_804B24C();
        v0 = (unsigned __int8)gReceivedRemoteLinkPlayers;
        if ( gReceivedRemoteLinkPlayers == 1 )
        {
          v0 = (unsigned __int8)IsLinkPlayerDataExchangeComplete();
          if ( v0 == 1 )
          {
            v7 = &byte_3001BAC;
            goto _0804B74C;
          }
        }
        break;
      case 5:
        *(_BYTE *)(dword_3004828 + 156) = 0;
        *(_BYTE *)(dword_3004828 + 157) = 0;
        *(_BYTE *)(dword_3004828 + 189) = 0;
        sub_804B2D0(0, 0, (int)&dword_3004828);
        v7 = &byte_3001BAC;
        goto _0804B74C;
      case 6:
        sub_804B2D0(0, 1, (int)gMain);
        goto _0804B746;
      case 7:
        sub_804B2D0(1u, 0, (int)gMain);
        v7 = &byte_3001BAC;
        goto _0804B74C;
      case 8:
        sub_804B2D0(1u, 1, (int)gMain);
        v7 = &byte_3001BAC;
        goto _0804B74C;
      case 9:
        sub_804C164();
        LoadSpriteSheet((int)&gUnknown_0821594C);
        LoadSpritePalette((int)&gUnknown_08215954);
        v400000A = 1282;
        v7 = &byte_3001BAC;
        goto _0804B74C;
      case 0xA:
        ++byte_3001BAC;
        goto _0804B726;
      case 0xB:
_0804B726:
        sub_804BBE8(5);
        v9 = sub_804BBE8(0);
        sub_804C1A8(v9);
        BeginNormalPaletteFade(-1, 0, 16, 0);
_0804B746:
        v7 = &byte_3001BAC;
_0804B74C:
        v0 = (unsigned __int8)*v7 + 1;
        *v7 = v0;
        break;
      case 0xC:
        v0 = v202F38F & 0x80;
        if ( !(v202F38F & 0x80) )
          v0 = SetMainCallback2((int)sub_804DB84);
        break;
      default:
        break;
    }
  }
  RunTasks(v0);
  AnimateSprites();
  v10 = BuildOamBuffer();
  UpdatePaletteFade(v10);
  return v12;
}
