int sub_8047EC0()
{
  char *v0; // r0@1
  int v1; // r0@3
  char v2; // r0@3
  int v3; // r0@3
  int v4; // r0@3
  signed int v5; // r6@3
  signed int v6; // r6@6
  char *v7; // r1@10
  unsigned int v8; // r4@11
  int *v9; // r2@21
  signed int v10; // r6@21
  char *v11; // r7@22
  int v12; // r5@23
  int v13; // r2@23
  char v14; // r0@23
  signed int v15; // r6@24
  char *v16; // r7@25
  int v17; // r5@26
  int v18; // r2@26
  int v19; // r3@28
  int v20; // r0@31
  char v21; // r0@34
  int v22; // r0@42
  int v23; // r0@47
  __int16 v25; // [sp+10h] [bp-1Ch]@3
  int v26; // [sp+28h] [bp-4h]@47

  v0 = (char *)(unsigned __int8)byte_3001BAC;
  if ( (unsigned __int8)byte_3001BAC <= 0x15u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        dword_3004824 = 33648640;
        sub_804AA88();
        ResetSpriteData();
        v1 = FreeAllSpritePalettes();
        ResetTasks(v1);
        sub_804A964(dword_3004824 + 200, 100673536);
        SetVBlankCallback((int)sub_80489F4);
        InitMenuWindow(&gWindowConfig_81E6CE4);
        SetUpWindowConfig((int)&gWindowConfig_81E6F84);
        InitWindowFromConfig(dword_3004824 + 4, (int)&gWindowConfig_81E6F84);
        v2 = SetTextWindowBaseTileNum(20);
        *(_BYTE *)(dword_3004824 + 122) = v2;
        v3 = LoadTextWindowGraphics(dword_3004824 + 4);
        v4 = MenuZeroFillScreen(v3);
        sub_809D51C(v4);
        *(_BYTE *)(dword_3004824 + 117) = 0;
        *(_BYTE *)(dword_3004824 + 123) = 0;
        *(_BYTE *)(dword_3004824 + 124) = 0;
        *(_BYTE *)(dword_3004824 + 128) = 0;
        *(_BYTE *)(dword_3004824 + 129) = 0;
        *(_BYTE *)(dword_3004824 + 134) = 0;
        *(_BYTE *)(dword_3004824 + 135) = 0;
        *(_BYTE *)(dword_3004824 + 180) = 0;
        byte_3000508 = 0;
        ++byte_3001BAC;
        sub_804AA0C(0);
        v25 = 0;
        CpuSet(&v25, 33673216, 16778880);
        v5 = 33676288;
        v0 = (char *)33724156;
        do
        {
          *(_DWORD *)v0 = v5;
          v5 -= 256;
          v0 -= 4;
        }
        while ( (signed int)v0 >= 33724108 );
        break;
      case 1:
        gLinkType = 4386;
        OpenLink();
        v6 = 0;
        do
          CreateMon((int)&unk_30045C0 + 100 * v6++, 0, 0, 0x20u);
        while ( v6 <= 5 );
        ++byte_3001BAC;
        *(_BYTE *)(dword_3004824 + 180) = 0;
        v0 = (char *)CreateTask(sub_8083C50, 1);
        break;
      case 2:
        v0 = (char *)++*(_BYTE *)(dword_3004824 + 180);
        if ( (unsigned int)v0 > 0xB )
        {
          *(_BYTE *)(dword_3004824 + 180) = 0;
          v7 = &byte_3001BAC;
          goto _08048498;
        }
        break;
      case 3:
        v8 = GetLinkPlayerCount_2();
        v0 = (char *)(sub_800820C() << 24);
        if ( v8 << 24 >= (unsigned int)v0 )
        {
          if ( !(IsLinkMaster() << 24) )
          {
            v7 = &byte_3001BAC;
            goto _08048498;
          }
          LOBYTE(v0) = *(_BYTE *)(dword_3004824 + 180) + 1;
          *(_BYTE *)(dword_3004824 + 180) = (_BYTE)v0;
          v0 = (char *)(unsigned __int8)v0;
          if ( (unsigned __int8)v0 > 0x1Eu )
          {
            sub_8007F4C();
            goto _08048492;
          }
        }
        break;
      case 4:
        v0 = (char *)(unsigned __int8)gReceivedRemoteLinkPlayers;
        if ( gReceivedRemoteLinkPlayers == 1 )
        {
          v0 = (char *)(unsigned __int8)IsLinkPlayerDataExchangeComplete();
          if ( v0 == (char *)1 )
          {
            calc_player_party_count();
            v7 = &byte_3001BAC;
            goto _08048498;
          }
        }
        break;
      case 5:
        v0 = (char *)(sub_8048D44() << 24);
        if ( v0 )
        {
          sub_804AF84();
          goto _08048492;
        }
        break;
      case 6:
        calc_enemy_party_count();
        FillWindowRect_DefaultPalette(dword_3004824 + 4, 0, 0, 0, 0x1Du, 0x13u);
        v4000000 = 0;
        *(_BYTE *)(dword_3004824 + 66) = byte_3004350;
        *(_BYTE *)(dword_3004824 + 67) = byte_30045B8;
        v10 = 0;
        if ( (signed int)*(_BYTE *)(dword_3004824 + 66) > 0 )
        {
          v11 = &gTradeMonSpriteCoords;
          do
          {
            v12 = (unsigned __int16)GetMonData((int)&dword_3004360[25 * v10], 65, (int)v9);
            GetMonData((int)&dword_3004360[25 * v10], 0, v13);
            v14 = sub_809D2FC(
                    v12,
                    sub_809D62C,
                    (((unsigned __int8)*v11 << 19) + 917504) >> 16,
                    (((unsigned __int8)v11[1] << 19) - 786432) >> 16);
            v9 = &dword_3004824;
            *(_BYTE *)(dword_3004824 + 52 + v10) = v14;
            v11 += 2;
            ++v10;
          }
          while ( v10 < *(_BYTE *)(dword_3004824 + 66) );
        }
        v15 = 0;
        if ( (signed int)*(_BYTE *)(dword_3004824 + 67) > 0 )
        {
          v16 = &byte_820C2A8;
          do
          {
            v17 = (unsigned __int16)GetMonData((int)&unk_30045C0 + 100 * v15, 65, 0);
            GetMonData((int)&unk_30045C0 + 100 * v15, 0, v18);
            *(_BYTE *)(dword_3004824 + 58 + v15) = sub_809D2FC(
                                                     v17,
                                                     sub_809D62C,
                                                     (((unsigned __int8)*v16 << 19) + 917504) >> 16,
                                                     (((unsigned __int8)v16[1] << 19) - 786432) >> 16);
            v16 += 2;
            ++v15;
          }
          while ( v15 < *(_BYTE *)(dword_3004824 + 67) );
        }
        nullsub_5(2, 0);
        goto _08048492;
      case 7:
        sub_806DA98();
        sub_806DB90(dword_3004824 + 66, dword_3004824 + 52, 0, v19);
        v7 = &byte_3001BAC;
        goto _08048498;
      case 8:
        sub_806DB90(dword_3004824 + 66, dword_3004824 + 52, 1, gMain);
        v7 = &byte_3001BAC;
        goto _08048498;
      case 9:
        sub_8047CE8();
        ++byte_3001BAC;
        v0 = (char *)(dword_3004824 + 180);
        *(_BYTE *)(dword_3004824 + 180) = 0;
        break;
      case 0xA:
        v20 = nullsub_5(4, 0);
        v0 = (char *)(sub_804ABF8(v20) << 24);
        if ( !v0 )
          break;
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0xB:
        sub_8047D58();
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0xC:
        sub_8047E44();
        v21 = CreateSprite(
                (int)&gSpriteTemplate_820C134,
                (((unsigned int)(unsigned __int8)gTradeMonSpriteCoords << 19) + 0x200000) >> 16,
                40);
        *(_BYTE *)(dword_3004824 + 64) = v21;
        *(_BYTE *)(dword_3004824 + 65) = 0;
        ++byte_3001BAC;
        v0 = (char *)nullsub_5(6, 0);
        break;
      case 0xD:
        sub_804ACF4(0);
        sub_804A41C(0);
        *(_BYTE *)dword_3004824 = 0;
        *(_BYTE *)(dword_3004824 + 1) = 0;
        sub_8048C70();
        ++byte_3001BAC;
        nullsub_5(7, 0);
        v0 = (char *)sub_8075474(435);
        break;
      case 0xE:
        sub_804ACF4(1);
        sub_804A41C(1);
        ++byte_3001BAC;
        goto _08048418;
      case 0xF:
_08048418:
        sub_8048B0C(0);
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0x10:
        sub_8048B0C(1);
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0x11:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        goto _08048492;
      case 0x12:
        v4000000 = 8000;
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0x13:
        sub_804AE3C(0);
        v7 = &byte_3001BAC;
        goto _08048498;
      case 0x14:
        v22 = sub_804AE3C(1);
        sub_804AF10(v22);
_08048492:
        v7 = &byte_3001BAC;
_08048498:
        v0 = (char *)((unsigned __int8)*v7 + 1);
        *v7 = (char)v0;
        break;
      case 0x15:
        v0 = (char *)((unsigned __int8)(v202F38F & 0x80) << 24);
        if ( !(v202F38F & 0x80) )
        {
          gMain[0] = (int)sub_80494D8;
          SetMainCallback2((int)sub_8048AB4);
          v0 = &byte_3000508;
          byte_3000508 = 0;
        }
        break;
      default:
        break;
    }
  }
  RunTasks(v0);
  AnimateSprites();
  v23 = BuildOamBuffer();
  UpdatePaletteFade(v23);
  return v26;
}
