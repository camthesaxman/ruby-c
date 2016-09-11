int sub_804DC88()
{
  char *v0; // r0@4
  char v1; // r1@4
  _DWORD *v2; // r3@5
  unsigned int v3; // r0@5
  char *v4; // r0@8
  int v5; // r0@14
  int v6; // r0@15
  char *v7; // r1@16
  _DWORD *v8; // r1@23
  unsigned int v9; // r0@23
  unsigned int v10; // r0@28
  int v11; // r0@42
  int v13; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)byte_3001BAC <= 0x65u )
  {
    switch ( byte_3001BAC )
    {
      case 0:
        dword_3004828 = 33681408;
        ++byte_3001BAC;
        ZeroFillWindowRect(33681412, 0, 0, 0x1Du, 0x13u);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"ÆÝâß");
        sub_8003460(dword_3004828 + 4, (int)&gStringVar4, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        break;
      case 1:
        sub_80084A4();
        v0 = &byte_3001BAC;
        v1 = 100;
        goto _0804DFEE;
      case 0x64:
        v2 = (_DWORD *)(dword_3004828 + 192);
        v3 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v3;
        if ( v3 > 0xB4 )
        {
          byte_3001BAC = 101;
          *v2 = 0;
        }
        if ( !(sub_8007ECC() << 24) )
          break;
        v4 = &byte_3001BAC;
        goto _0804DF06;
      case 0x65:
        if ( sub_8007ECC() << 24 )
        {
          v4 = &byte_3001BAC;
_0804DF06:
          *v4 = 2;
        }
        break;
      case 2:
        byte_3001BAC = 50;
        ZeroFillWindowRect(dword_3004828 + 4, 0, 0, 0x1Du, 0x13u);
        sub_8003460(dword_3004828 + 4, (int)&gUnknown_08411905, *(_BYTE *)(dword_3004828 + 52), 2, 0xFu);
        break;
      case 0x32:
        sub_8047A1C();
        v5 = sav12_xor_increment(21);
        sub_8125D80(v5);
        ++byte_3001BAC;
        goto _0804DFF0;
      case 0x33:
        v6 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v6;
        if ( v6 != 5 )
          break;
        v7 = &byte_3001BAC;
        goto _0804E0FA;
      case 0x34:
        if ( sub_8125DA8() & 0xFF )
        {
          sub_8047A34();
          byte_3001BAC = 4;
        }
        else
        {
          *(_DWORD *)(dword_3004828 + 192) = 0;
          byte_3001BAC = 51;
        }
        break;
      case 4:
        sub_8125DDC();
        v0 = &byte_3001BAC;
        v1 = 40;
_0804DFEE:
        *v0 = v1;
_0804DFF0:
        *(_DWORD *)(dword_3004828 + 192) = 0;
        break;
      case 0x28:
        v8 = (_DWORD *)(dword_3004828 + 192);
        v9 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v9;
        if ( v9 > 0x32 )
        {
          *v8 = 0;
          byte_3001BAC = 41;
        }
        break;
      case 0x29:
        sub_80084A4();
        byte_3001BAC = 42;
        break;
      case 0x2A:
        if ( sub_8007ECC() << 24 )
        {
          sub_8125E04();
          gUnknown_3001BB4 = 0;
          byte_3001BAC = 5;
        }
        break;
      case 5:
        v10 = *(_DWORD *)(dword_3004828 + 192) + 1;
        *(_DWORD *)(dword_3004828 + 192) = v10;
        if ( v10 > 0x3C )
        {
          ++byte_3001BAC;
          sub_80084A4();
        }
        break;
      case 6:
        if ( !(sub_8007ECC() << 24) )
          break;
        BeginNormalPaletteFade(-1, 0, 0, 16);
        goto _0804E0F4;
      case 7:
        if ( v202F38F & 0x80 )
          break;
        play_sound_effect(3);
        v7 = &byte_3001BAC;
        goto _0804E0FA;
      case 8:
        if ( (sub_8075028() & 0xFF) == 1 )
        {
          sub_800832C();
_0804E0F4:
          v7 = &byte_3001BAC;
_0804E0FA:
          ++*v7;
        }
        break;
      case 9:
        if ( !gReceivedRemoteLinkPlayers )
          SetMainCallback2((int)sub_804E144);
        break;
      default:
        break;
    }
  }
  if ( !(HasLinkErrorOccurred() << 24) )
    RunTasks(0);
  AnimateSprites();
  v11 = BuildOamBuffer();
  UpdatePaletteFade(v11);
  return v13;
}
