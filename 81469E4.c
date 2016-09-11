int sub_81469E4()
{
  unsigned __int8 v0; // r2@3
  unsigned __int8 v1; // r3@3
  char *v2; // r1@5
  char *v3; // r1@17
  char *v4; // r0@21
  int v5; // r6@36
  int v6; // r4@37
  __int16 v8; // [sp+0h] [bp-18h]@3
  int v9; // [sp+4h] [bp-14h]@37
  int v10; // [sp+14h] [bp-4h]@53

  if ( (unsigned __int8)byte_3001BAC <= 0x10u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        MenuDrawTextWindow(0, 0xEu);
        v8 = 0;
        v0 = 16;
        v1 = 0;
        goto _08146D78;
      case 1:
        if ( v202F38F & 0x80 )
          break;
        sub_8072044((int)"Æİâß");
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 2:
        if ( MenuUpdateWindowText() << 24 )
        {
          ++byte_3001BAC;
          gLinkType = 21761;
          OpenLink();
        }
        break;
      case 3:
        if ( gLinkStatus & 0x20 && (gLinkStatus & 0x1Cu) > 4 )
        {
          audio_play(0x15u);
          sub_8072044((int)"ÊæÙçç");
          ++byte_3001BAC;
        }
        goto _08146C38;
      case 4:
        if ( MenuUpdateWindowText() << 24 )
          goto _08146D7C;
        break;
      case 5:
        if ( (unsigned __int8)GetLinkPlayerCount_2() != 2 )
          goto _08146C10;
        if ( word_300179E & 1 )
        {
          audio_play(5u);
          sub_8007F4C();
          MenuDrawTextWindow(6u, 5u);
          MenuPrint((int)"ÆãÕØİâÛ", 7, 6u);
          v2 = &byte_3001BAC;
          goto _08146D82;
        }
        if ( !(word_300179E & 2) )
          break;
        audio_play(5u);
        CloseLink();
        v3 = &byte_3001BAC;
        goto _08146C54;
      case 6:
        if ( IsLinkConnectionEstablished() << 24 )
        {
          if ( !gReceivedRemoteLinkPlayers )
            break;
          if ( (unsigned __int8)GetLinkPlayerDataExchangeStatusTimed() == 3 )
          {
            sub_800832C();
            MenuZeroFillWindowRect(6u, 5u, 0x17u, 8u);
            sub_81469AC(gStringVar4, 1);
            sub_8072044((int)gStringVar4);
            v4 = &byte_3001BAC;
_08146C26:
            *v4 = 13;
            break;
          }
          if ( !(sub_8146914() << 24) )
          {
            CloseLink();
            MenuZeroFillWindowRect(6u, 5u, 0x17u, 8u);
_08146C10:
            sub_81469AC(gStringVar4, 1);
            sub_8072044((int)gStringVar4);
            v4 = &byte_3001BAC;
            goto _08146C26;
          }
          sub_8072044((int)"¾ãâ´è");
_08146D7C:
          v2 = &byte_3001BAC;
_08146D82:
          ++*v2;
        }
        else
        {
_08146C38:
          if ( word_300179E & 2 )
          {
            audio_play(5u);
            CloseLink();
            v3 = &byte_3001BAC;
_08146C54:
            *v3 = 15;
          }
        }
        break;
      case 7:
        if ( MenuUpdateWindowText() << 24 )
          goto _08146D7C;
        break;
      case 8:
        if ( !(GetBlockRecievedStatus() << 24) )
          break;
        ResetBlockReceivedFlags();
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 9:
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 0xA:
        sub_800832C();
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 0xB:
        v5 = (unsigned __int8)gReceivedRemoteLinkPlayers;
        if ( gReceivedRemoteLinkPlayers )
          break;
        v6 = (unsigned __int16)sub_812613C(0x2000000);
        v9 = v5;
        CpuSet(&v9, 0x2000000, 83886581);
        if ( !(sub_81469AC(gStringVar4, v6) << 24) )
          sub_8125D44(0);
        goto _08146D7C;
      case 0xC:
        sub_8072044((int)gStringVar4);
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 0xD:
        MenuZeroFillWindowRect(6u, 5u, 0x17u, 8u);
        if ( MenuUpdateWindowText() << 24 )
        {
          ++byte_3001BAC;
          v2039338 = 0;
        }
        break;
      case 0xE:
        if ( !(word_300179E & 1) )
          break;
        audio_play(5u);
        v2 = &byte_3001BAC;
        goto _08146D82;
      case 0xF:
        v8 = 0;
        v0 = 0;
        v1 = 16;
_08146D78:
        BeginNormalPaletteFade(-1, 0, v0, v1, v8);
        goto _08146D7C;
      case 0x10:
        if ( !(v202F38F & 0x80) )
          DoSoftReset();
        break;
      default:
        break;
    }
  }
  if ( gLinkStatus & 0x40 && !(IsLinkMaster() << 24) )
  {
    CloseLink();
    MenuZeroFillWindowRect(6u, 5u, 0x17u, 8u);
    sub_81469AC(gStringVar4, 1);
    sub_8072044((int)gStringVar4);
    byte_3001BAC = 13;
  }
  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v10;
}
