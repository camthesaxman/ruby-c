int sub_8050E30()
{
  int v0; // r0@1
  int v1; // r1@3
  int v2; // r2@3
  int v3; // r2@5
  _BYTE *v4; // r0@9
  char *v5; // r4@9
  _BYTE *v6; // r1@9
  int v7; // r0@10
  int v8; // r1@13
  int v9; // r2@14
  int v10; // r1@19
  int v11; // r2@26
  _BYTE *v12; // r1@31
  int v13; // r0@34
  int v14; // r0@34
  int v16; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(dword_3004854 + 111);
  if ( (unsigned int)v0 <= 0xC )
  {
    switch ( v0 )
    {
      case 0:
        v1 = dword_3004854;
        v2 = *(_WORD *)(dword_3004854 + 112);
        if ( v2 == 8738 )
          goto _08050FA2;
        v0 = 4369;
        if ( v2 == 4369 )
        {
          v3 = *(_WORD *)(dword_3004854 + 120);
          if ( v3 == 39321 )
          {
            v0 = 2;
            *(_BYTE *)(dword_3004854 + 111) = 2;
          }
          else
          {
            if ( v3 != 43690 )
              goto _08050FA2;
            v0 = 1;
            *(_BYTE *)(dword_3004854 + 111) = 1;
          }
        }
        break;
      case 1:
        v4 = (_BYTE *)(dword_3004854 + 111);
        *v4 = 3;
        sub_814A7FC(v4);
        MenuZeroFillWindowRect(23, 8, 28, 13);
        v5 = &gStringVar4;
        StringCopy(&gStringVar4, (_BYTE *)&unk_3002978 + 28 * *(_WORD *)(dword_3004854 + 122));
        v6 = &gUnknown_0842D461;
        goto _08050F4C;
      case 2:
        v7 = *(_BYTE *)(dword_3004854 + 111) + 1;
        *(_BYTE *)(dword_3004854 + 111) = v7;
        sub_814A7FC(v7);
        MenuZeroFillWindowRect(23, 8, 28, 13);
        v5 = &gStringVar4;
        StringCopy(&gStringVar4, (_BYTE *)&unk_3002978 + 28 * *(_WORD *)(dword_3004854 + 122));
        v6 = &gUnknown_0842D434;
_08050F4C:
        StringAppend(v5, v6);
        v0 = MenuPrintMessage(v5, 1, 15);
        break;
      case 3:
        v0 = MenuUpdateWindowText() << 24;
        if ( !v0 )
          break;
        v8 = dword_3004854;
        *(_DWORD *)(dword_3004854 + 304) = 0;
        goto _080510AC;
      case 4:
        v9 = dword_3004854;
        v0 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v0;
        if ( v0 > 60 )
        {
          v1 = v9;
_08050FA2:
          v0 = 5;
          *(_BYTE *)(v1 + 111) = 5;
        }
        break;
      case 5:
        MenuDrawTextWindow(0, 14, 29, 19);
        MenuPrint(&gUnknown_0842C328, 2, 15);
        sub_80084A4();
        v8 = dword_3004854;
        goto _080510AC;
      case 6:
        v0 = sub_8007ECC() << 24;
        if ( v0 )
        {
          v10 = dword_3004854;
          *(_DWORD *)(dword_3004854 + 304) = 0;
          ++*(_BYTE *)(v10 + 111);
          v0 = dword_3004854 + 452;
          *(_DWORD *)(dword_3004854 + 452) = 0;
        }
        break;
      case 7:
        v0 = sub_8050CE8() << 24;
        if ( !v0 )
          break;
        audio_play(55);
        v8 = dword_3004854;
        goto _080510AC;
      case 8:
        ++*(_BYTE *)(dword_3004854 + 111);
        v0 = sub_80084A4();
        break;
      case 9:
        v0 = sub_8007ECC() << 24;
        if ( !v0 )
          break;
        BeginNormalPaletteFade(-1, 0, 0, 16);
        v8 = dword_3004854;
        goto _080510AC;
      case 10:
        v0 = (unsigned __int8)(v202F38F & 0x80) << 24;
        if ( v202F38F & 0x80 )
          break;
        v11 = dword_3004854;
        if ( *(_WORD *)(dword_3004854 + 112) == 8738 )
        {
          v0 = SetMainCallback2((int)sub_804E538);
        }
        else
        {
          *(_DWORD *)(dword_3004854 + 304) = 0;
          v8 = v11;
_080510AC:
          v12 = (_BYTE *)(v8 + 111);
          v0 = *v12 + 1;
          *v12 = v0;
        }
        break;
      case 11:
        v0 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v0;
        if ( v0 <= 30 )
          break;
        sub_800832C();
        v8 = dword_3004854;
        goto _080510AC;
      case 12:
        v0 = (unsigned __int8)gReceivedRemoteLinkPlayers;
        if ( !gReceivedRemoteLinkPlayers )
          v0 = SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
        break;
      default:
        break;
    }
  }
  v13 = sub_805123C(v0);
  RunTasks(v13);
  AnimateSprites();
  v14 = BuildOamBuffer();
  UpdatePaletteFade(v14);
  return v16;
}
