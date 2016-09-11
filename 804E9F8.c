int sub_804E9F8()
{
  _WORD *v0; // r0@1
  int v1; // r0@3
  int v2; // r0@3
  int v3; // r1@3
  int v4; // r5@3
  int v5; // r4@4
  int v6; // r1@4
  signed int v7; // r2@4
  int v8; // r3@7
  _WORD *v9; // r0@7
  int v10; // r0@9
  signed int v11; // r5@10
  char *v12; // r4@10
  char v13; // r0@11
  int v14; // r4@22
  signed int i; // r5@23
  char v16; // r0@28
  int v17; // r5@28
  char *v18; // r0@28
  _BYTE *v19; // r1@31
  _BYTE *v20; // r1@31
  int v21; // r2@32
  int v22; // r0@38
  int v23; // r2@39
  unsigned __int16 v24; // r0@39
  int v25; // r3@40
  int v26; // r0@40
  _BYTE *v27; // r1@44
  int *v28; // r0@47
  int v29; // r3@51
  int v30; // r0@51
  int v31; // r0@51
  int v32; // r0@61
  int v34; // [sp+18h] [bp-4h]@0

  v0 = (_WORD *)*(_BYTE *)dword_3004854;
  if ( (unsigned int)v0 <= 0x66 )
  {
    switch ( v0 )
    {
      case 0u:
        ResetSpriteData();
        v1 = FreeAllSpritePalettes();
        ResetTasks(v1);
        SetVBlankCallback((int)sub_804E2BC);
        SetUpWindowConfig((int)&gWindowConfig_81E6F68);
        InitMenuWindow(&gWindowConfig_81E6F68);
        gLinkType = 17442;
        ++*(_BYTE *)dword_3004854;
        v2 = dword_3004854;
        *(_WORD *)(dword_3004854 + 78) = 0;
        *(_BYTE *)(v2 + 126) = 0;
        v3 = dword_3004854;
        *(_WORD *)(dword_3004854 + 324) = 0;
        *(_WORD *)(v3 + 326) = 0;
        v4 = 0;
        do
        {
          *(_WORD *)(dword_3004854 + 112 + 2 * v4) = 0;
          v5 = v4 + 1;
          v6 = 6 * v4;
          v7 = 2;
          do
          {
            *(_WORD *)(dword_3004854 + 332 + v6) = 0;
            v6 += 2;
            --v7;
          }
          while ( v7 >= 0 );
          ++v4;
        }
        while ( v5 <= 3 );
        v8 = dword_3004854;
        v9 = (_WORD *)(dword_3004854 + 124);
        *v9 = 0;
        v9 -= 19;
        *v9 = 0;
        --v9;
        *v9 = 0;
        v0 = v9 + 3;
        *v0 = 0;
        *(_BYTE *)(v8 + 1) = 0;
        goto def_804EA16;
      case 1u:
        v0 = (_WORD *)(sub_804E2EC() << 24);
        if ( v0 )
        {
          v10 = *(_BYTE *)dword_3004854 + 1;
          *(_BYTE *)dword_3004854 = v10;
          v0 = (_WORD *)sub_8051474(v10);
        }
        goto def_804EA16;
      case 2u:
        v11 = 0;
        v12 = &gUnknown_082162E4;
        do
        {
          v13 = CreateSprite((int)&gSpriteTemplate_82163F4, (unsigned __int8)*v12, (unsigned __int8)v12[1]);
          *(_BYTE *)(dword_3004854 + 96 + v11) = v13;
          StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_3004854 + 96 + v11)], v11 + 8);
          v12 += 2;
          ++v11;
        }
        while ( v11 <= 3 );
        goto _0804F0AA;
      case 3u:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        goto _0804F0AA;
      case 4u:
        sub_804E4FC();
        v0 = (_WORD *)(v202F38F & 0x80);
        if ( !(v202F38F & 0x80) )
          goto _0804F0AA;
        goto def_804EA16;
      case 5u:
        MenuDrawTextWindow(0, 13, 29, 19);
        MenuPrint("ÆÝâß", 1, 14);
        *(_BYTE *)dword_3004854 = 8;
        v0 = (_WORD *)(dword_3004854 + 304);
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto def_804EA16;
      case 8u:
        ++*(_BYTE *)dword_3004854;
        *(_BYTE *)(dword_3004854 + 316) = 0;
        sub_804E844(dword_3004854 + 380, v203855E);
        memcpy(&gBlockSendBuffer, dword_3004854 + 380, 16);
        sub_80084A4();
        v0 = (_WORD *)(dword_3004854 + 304);
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto def_804EA16;
      case 9u:
        v0 = (_WORD *)(sub_8007ECC() << 24);
        if ( !v0 )
          goto def_804EA16;
        ResetBlockReceivedFlags();
        if ( !(GetMultiplayerId() << 24) )
          sub_8007E9C(4);
        goto _0804F0AA;
      case 0xAu:
        v0 = (_WORD *)(*(_DWORD *)(dword_3004854 + 304) + 1);
        *(_DWORD *)(dword_3004854 + 304) = v0;
        if ( (signed int)v0 <= 20 )
          goto def_804EA16;
        MenuZeroFillScreen(v0);
        v14 = GetBlockRecievedStatus();
        v0 = (_WORD *)(sub_8008198() << 24);
        if ( (_WORD *)(v14 << 24) != v0 )
          goto def_804EA16;
        for ( i = 0; i < (unsigned __int8)GetLinkPlayerCount(); ++i )
        {
          memcpy(16 * i + dword_3004854 + 380, &gBlockRecvBuffer[64 * i], 16);
          *(_WORD *)(dword_3004854 + 128 + 2 * i) = *(_WORD *)(dword_3004854 + 16 * i + 380);
        }
        ResetBlockReceivedFlags();
        goto _0804F0AA;
      case 0xBu:
        v16 = GetLinkPlayerCount();
        *(_BYTE *)(dword_3004854 + 136) = v16;
        v17 = 0;
        v18 = (char *)&gUnknown_082162EC + 4 * (*(_BYTE *)(dword_3004854 + 136) - 2);
        break;
      case 0xCu:
        v21 = dword_3004854;
        v0 = (_WORD *)(*(_DWORD *)(dword_3004854 + 304) + 1);
        *(_DWORD *)(dword_3004854 + 304) = v0;
        if ( (signed int)v0 > 60 )
        {
          if ( *(_BYTE *)(v21 + 316) < (unsigned int)*(_BYTE *)(v21 + 136) )
          {
            --*(_BYTE *)v21;
          }
          else
          {
            ++*(_BYTE *)v21;
            *(_WORD *)(dword_3004854 + 84) = gUnknown_082162F8[gUnknown_08216300[*(_BYTE *)(dword_3004854 + 136) - 2]]
                                           - 22528;
          }
          v0 = (_WORD *)(dword_3004854 + 304);
          *(_DWORD *)(dword_3004854 + 304) = 0;
        }
        goto def_804EA16;
      case 0xDu:
        v0 = (_WORD *)(sub_8007ECC() << 24);
        if ( !v0 )
          goto def_804EA16;
        ++*(_BYTE *)dword_3004854;
        v22 = dword_3004854;
        goto _0804EFBC;
      case 0xEu:
        v4000000 |= 0x400u;
        v23 = dword_3004854;
        *(_WORD *)(dword_3004854 + 84) += 512;
        v24 = *(_WORD *)(v23 + 322) + 4;
        *(_WORD *)(v23 + 322) = v24;
        if ( v24 > 0xFFu )
        {
          ++*(_BYTE *)v23;
          v25 = dword_3004854;
          *(_WORD *)(dword_3004854 + 322) = 256;
          *(_WORD *)(v25 + 84) = gUnknown_082162F8[gUnknown_08216300[*(_BYTE *)(v25 + 136) - 2]];
          v400000C = 18562;
          *(_DWORD *)(v25 + 304) = 0;
          v26 = sub_804F238();
          BuyMenuDrawFieldObjects(v26);
        }
        v22 = dword_3004854;
_0804EFBC:
        v0 = (_WORD *)sub_8051414(v22 + 360);
        goto def_804EA16;
      case 0xFu:
        if ( sub_8051B8C() << 24 )
        {
          v27 = (_BYTE *)dword_3004854;
          *(_DWORD *)(dword_3004854 + 304) = 0;
          ++*v27;
        }
        v0 = (_WORD *)sub_8051414(dword_3004854 + 360);
        goto def_804EA16;
      case 0x10u:
        CreateSprite((int)&gSpriteTemplate_8216548, 120, -16);
        goto _0804F0AA;
      case 0x12u:
        v28 = &dword_3004854;
        goto _0804F0AC;
      case 0x13u:
        sub_80084A4();
        goto _0804F0AA;
      case 0x14u:
        v0 = (_WORD *)(sub_8007ECC() << 24);
        if ( !v0 )
          goto def_804EA16;
        sub_8007E24();
        goto _0804F0AA;
      case 0x15u:
        v29 = dword_3004854;
        *(_WORD *)(dword_3004854 + 86) = 128;
        *(_DWORD *)(v29 + 300) = 0;
        v30 = SetMainCallback2((int)sub_80501FC);
        v31 = (unsigned __int16)current_map_music_get(v30);
        if ( v31 != 403 )
          *(_WORD *)(dword_3004854 + 376) = current_map_music_get(v31);
        v0 = (_WORD *)sub_8075474(403);
        goto def_804EA16;
      case 0x64u:
        MenuDrawTextWindow(0, 13, 29, 19);
        MenuPrintMessage("ÆÝâß", 1, 15);
        goto _0804F0AA;
      case 0x65u:
        v0 = (_WORD *)(MenuUpdateWindowText() << 24);
        if ( !v0 )
          goto def_804EA16;
_0804F0AA:
        v28 = &dword_3004854;
_0804F0AC:
        v20 = (_BYTE *)*v28;
        goto _0804F0AE;
      case 0x66u:
        v0 = (_WORD *)(v202F38F & 0x80);
        if ( !(v202F38F & 0x80) )
          v0 = (_WORD *)SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
        goto def_804EA16;
      default:
        goto def_804EA16;
    }
    while ( *(_BYTE *)(dword_3004854 + 316) != (unsigned __int8)*v18 )
    {
      ++v18;
      if ( ++v17 > 3 )
        goto _0804EE7A;
    }
    sub_804E7C0(*(_WORD *)(dword_3004854 + 128 + 2 * *(_BYTE *)(dword_3004854 + 316)), v17);
_0804EE7A:
    v19 = (_BYTE *)dword_3004854;
    *(_DWORD *)(dword_3004854 + 304) = 0;
    ++*v19;
    v20 = (_BYTE *)(dword_3004854 + 316);
_0804F0AE:
    v0 = (_WORD *)(*v20 + 1);
    *v20 = (_BYTE)v0;
  }
def_804EA16:
  RunTasks(v0);
  AnimateSprites();
  v32 = BuildOamBuffer();
  UpdatePaletteFade(v32);
  return v34;
}
