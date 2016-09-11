int __fastcall sub_8050954(int a1)
{
  unsigned int v1; // r0@1
  unsigned int i; // r4@3
  int v3; // r3@7
  _WORD *v4; // r2@7
  int v5; // r0@7
  char *v6; // r1@9
  char v7; // r0@9
  int v8; // r3@15
  char *v9; // r1@15
  int v10; // r1@15
  int v11; // r3@17
  int v12; // r2@40
  __int16 v13; // r5@40
  signed __int16 v14; // r0@42
  _BYTE *v15; // r1@47
  int (*v16)(); // r0@49
  int v17; // r0@57
  int v18; // r0@57
  int v19; // r0@57
  int v21; // [sp+10h] [bp-4h]@0

  sub_8051474(a1);
  GetMultiplayerId();
  v1 = *(_BYTE *)(dword_3004854 + 111) - 1;
  if ( v1 > 0xC )
    goto def_8050976;
  switch ( *(_BYTE *)(dword_3004854 + 111) )
  {
    case 1:
      ClearLinkCallback();
      m4aMPlayTempoControl(&unk_3007380, 256);
      for ( i = 0; i < v202E8CC; i = (i + 1) & 0xFF )
        DestroyTask(*(_BYTE *)(dword_3004854 + 328 + i));
      goto _08050C82;
    case 2:
      v3 = dword_3004854;
      v4 = (_WORD *)(dword_3004854 + 86);
      v5 = *(_WORD *)(dword_3004854 + 86) - 32;
      *(_WORD *)(dword_3004854 + 86) = v5;
      if ( v5 << 16 <= 0 )
      {
        *v4 = 0;
        if ( gReceivedRemoteLinkPlayers )
        {
          v6 = (char *)(v3 + 111);
          v7 = *(_BYTE *)(v3 + 111) + 1;
        }
        else
        {
          v6 = (char *)(v3 + 111);
          v7 = 5;
        }
        *v6 = v7;
        *(_BYTE *)dword_3004854 = 0;
        m4aMPlayStop(&unk_3007400);
      }
      v1 = sub_804E290();
      goto def_8050976;
    case 3:
      if ( GetMultiplayerId() << 24 )
        goto _08050C82;
      v1 = sub_8007ECC() << 24;
      if ( !v1 )
        goto def_8050976;
      v8 = dword_3004854;
      v9 = (char *)(dword_3004854 + 444);
      *(_DWORD *)v9 = *(_DWORD *)(dword_3004854 + 300);
      *(_WORD *)(v8 + 448) = *(_WORD *)(v8 + 90);
      SendBlock(0, v9, 0x28u);
      v10 = dword_3004854;
      goto _08050C86;
    case 4:
      v1 = GetBlockRecievedStatus() << 24;
      if ( v1 )
      {
        v11 = dword_3004854;
        *(_WORD *)(dword_3004854 + 90) = word_3002B84[0];
        *(_DWORD *)(v11 + 300) = gBlockRecvBuffer[0];
        ++*(_BYTE *)(v11 + 111);
        v1 = ResetBlockReceivedFlags();
      }
      goto def_8050976;
    case 5:
      v1 = sub_8052228() << 24;
      if ( v1 )
        goto _08050C82;
      goto def_8050976;
    case 6:
      v1 = sub_8051C58() << 24;
      if ( !v1 )
        goto def_8050976;
      if ( byte_3004834 )
        sav12_xor_increment(33);
      else
        sav12_xor_increment(34);
      goto _08050C82;
    case 7:
      ++*(_BYTE *)(dword_3004854 + 111);
      MenuDrawTextWindow(0, 14, 29, 19);
      v1 = MenuPrintMessage("ÑãéàØ", 1, 15);
      goto def_8050976;
    case 8:
      v1 = MenuUpdateWindowText() << 24;
      if ( v1 )
        goto _08050C82;
      goto def_8050976;
    case 9:
      *(_BYTE *)(dword_3004854 + 170) = 0;
      sub_80508FC();
      v10 = dword_3004854;
      goto _08050C86;
    case 0xA:
      if ( word_300179E & 0x40 )
      {
        if ( *(_BYTE *)(dword_3004854 + 170) )
          audio_play(5);
        v1 = sub_80508D4(0);
        goto def_8050976;
      }
      if ( word_300179E & 0x80 )
      {
        if ( *(_BYTE *)(dword_3004854 + 170) != 1 )
          audio_play(5);
        goto _08050BD4;
      }
      if ( word_300179E & 1 )
      {
        audio_play(5);
        goto _08050C82;
      }
      v1 = word_300179E & 2;
      if ( word_300179E & 2 )
      {
        audio_play(5);
        ++*(_BYTE *)(dword_3004854 + 111);
_08050BD4:
        v1 = sub_80508D4(1);
      }
def_8050976:
      sub_8051B18(v1);
      v17 = sub_8051A3C(*(_WORD *)(dword_3004854 + 86));
      v18 = sub_805123C(v17);
      RunTasks(v18);
      AnimateSprites();
      v19 = BuildOamBuffer();
      UpdatePaletteFade(v19);
      return v21;
    case 0xB:
      gSendCmd[0] = 12287;
      v12 = dword_3004854;
      v13 = *(_BYTE *)(dword_3004854 + 170);
      if ( *(_BYTE *)(dword_3004854 + 170) )
      {
        *(_WORD *)(dword_3004854 + 124) = 1;
        word_3002F92 = -30584;
        v15 = (_BYTE *)(v12 + 111);
        goto _08050C88;
      }
      if ( IsBagPocketNonEmpty(4) << 24 )
      {
        if ( (char)sub_810CA00() == -1 )
        {
          *(_WORD *)(dword_3004854 + 124) = 3;
          v14 = -21846;
        }
        else
        {
          *(_WORD *)(dword_3004854 + 124) = v13;
          v14 = 30585;
        }
      }
      else
      {
        *(_WORD *)(dword_3004854 + 124) = 2;
        v14 = -26215;
      }
      word_3002F92 = v14;
      goto _08050C82;
    case 0xC:
      if ( byte_3004834 )
      {
        v16 = sub_80510E8;
_08050CA4:
        SetMainCallback2((int)v16);
        *(_BYTE *)(dword_3004854 + 111) = 0;
        v1 = dword_3004854;
        *(_BYTE *)dword_3004854 = 0;
      }
      else
      {
        MenuPrintMessage("ÆÝâß", 1, 15);
_08050C82:
        v10 = dword_3004854;
_08050C86:
        v15 = (_BYTE *)(v10 + 111);
_08050C88:
        v1 = *v15 + 1;
        *v15 = v1;
      }
      goto def_8050976;
    case 0xD:
      v1 = MenuUpdateWindowText() << 24;
      if ( !v1 )
        goto def_8050976;
      v16 = sub_8050E30;
      goto _08050CA4;
    default:
      goto def_8050976;
  }
}
