int sub_8132908()
{
  unsigned int v0; // r0@1
  int v1; // r0@3
  char *v2; // r1@5
  char v3; // r0@5
  int v4; // r0@7
  int v5; // r0@8
  int v6; // r0@9
  char v7; // r0@15
  unsigned int *v8; // r0@16
  int v9; // r1@16
  char v10; // r0@27
  char v11; // r0@38
  char v12; // r0@46
  int v13; // r0@70
  unsigned __int16 v14; // r0@78
  int v16; // [sp+1Ch] [bp-4h]@0

  v0 = *(_BYTE *)dword_30007B0;
  if ( v0 <= 0x21 )
  {
    switch ( v0 )
    {
      case 0u:
        ++*(_BYTE *)dword_30007B0;
        sub_8132FEC();
        v1 = sub_8133030(0);
        sub_8133800(v1);
        word_2020068 = 72;
        *(_BYTE *)(dword_30007B0 + 707) = 1;
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        v4000000 = 4928;
        return v16;
      case 1u:
        if ( !(v202F38F & 0x80) )
        {
          v2 = (char *)dword_30007B0;
          v3 = 4;
          goto _08132FD4;
        }
        return v16;
      case 2u:
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 3u:
        v4 = sub_8133030(0);
        sub_8133800(v4);
        *(_BYTE *)(dword_30007B0 + 707) = 1;
        ++*(_BYTE *)dword_30007B0;
        word_2020068 = 72;
        return v16;
      case 4u:
        v5 = sub_81330E8();
        goto _08132A9C;
      case 5u:
        v6 = sub_8133140(0);
        sub_8133800(v6);
        *(_BYTE *)(dword_30007B0 + 707) = 1;
        word_2020068 = 72;
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 6u:
        v5 = sub_8133248();
_08132A9C:
        if ( !(v5 << 24) )
          sub_813362C();
        return v16;
      case 8u:
        if ( !(MenuUpdateWindowText() << 24) )
          return v16;
        DisplayYesNoMenu(0x15u, 7u, 1);
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 9u:
        v7 = ProcessMenuInputNoWrap_();
        if ( !v7 )
        {
          sub_8133CA4();
          v8 = &dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)];
          v9 = *(_WORD *)(dword_30007B0 + 32 + 2 * *(_BYTE *)(dword_30007B0 + 27));
          if ( GiveMoveToMon() << 16 == -65536 )
          {
            v2 = (char *)dword_30007B0;
            v3 = 16;
          }
          else
          {
            sub_81328E8((unsigned __int8 *)&gUnknown_0842CCE9);
            v202E8CC = 1;
            v2 = (char *)dword_30007B0;
            v3 = 31;
          }
          goto _08132FD4;
        }
        if ( v7 == -1 || v7 == 1 )
        {
          sub_8133CA4();
          if ( !*(_BYTE *)(dword_30007B0 + 708) )
            *(_BYTE *)dword_30007B0 = 3;
          v2 = (char *)dword_30007B0;
          if ( *(_BYTE *)(dword_30007B0 + 708) == 1 )
          {
            v3 = 5;
            goto _08132FD4;
          }
        }
        return v16;
      case 0xCu:
        if ( !(MenuUpdateWindowText() << 24) )
          return v16;
        DisplayYesNoMenu(0x15u, 7u, 1);
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 0xDu:
        v10 = ProcessMenuInputNoWrap_();
        if ( !v10 )
        {
          sub_8133CA4();
          v202E8CC = 0;
_08132FCE:
          v2 = (char *)dword_30007B0;
          v3 = 14;
          goto _08132FD4;
        }
        if ( v10 == -1 || v10 == 1 )
        {
          sub_8133CA4();
          if ( !*(_BYTE *)(dword_30007B0 + 708) )
            *(_BYTE *)dword_30007B0 = 3;
          v2 = (char *)dword_30007B0;
          if ( *(_BYTE *)(dword_30007B0 + 708) == 1 )
          {
            v3 = 5;
            goto _08132FD4;
          }
        }
        return v16;
      case 0x10u:
        sub_81328E8((unsigned __int8 *)&gUnknown_0842CCF8);
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 0x11u:
        if ( !(MenuUpdateWindowText() << 24) )
          return v16;
        DisplayYesNoMenu(0x15u, 7u, 1);
        v2 = (char *)dword_30007B0;
        v3 = 18;
        goto _08132FD4;
      case 0x12u:
        v11 = ProcessMenuInputNoWrap_();
        if ( !v11 )
        {
          sub_8133CA4();
          sub_81328E8((unsigned __int8 *)"ÑÜİ×Ü");
          v2 = (char *)dword_30007B0;
          v3 = 19;
          goto _08132FD4;
        }
        if ( v11 != -1 && v11 != 1 )
          return v16;
        sub_8133CA4();
        v2 = (char *)dword_30007B0;
        v3 = 24;
        goto _08132FD4;
      case 0x18u:
        sub_81328E8((unsigned __int8 *)"Íèãä");
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 0x19u:
        if ( MenuUpdateWindowText() << 24 )
        {
          *(_BYTE *)dword_30007B0 = 26;
          DisplayYesNoMenu(0x15u, 7u, 1);
        }
        return v16;
      case 0x1Au:
        v12 = ProcessMenuInputNoWrap_();
        if ( !v12 )
        {
          sub_8133CA4();
          v2 = (char *)dword_30007B0;
          v3 = 27;
          goto _08132FD4;
        }
        if ( v12 != -1 && v12 != 1 )
          return v16;
        sub_8133CA4();
        if ( !*(_BYTE *)(dword_30007B0 + 708) )
          *(_BYTE *)dword_30007B0 = 3;
        if ( *(_BYTE *)(dword_30007B0 + 708) == 1 )
          *(_BYTE *)dword_30007B0 = 5;
        v2 = (char *)dword_30007B0;
        v3 = 16;
        goto _08132FD4;
      case 0x1Bu:
        if ( !(MenuUpdateWindowText() << 24) )
          return v16;
        if ( !*(_BYTE *)(dword_30007B0 + 708) )
          *(_BYTE *)dword_30007B0 = 3;
        v2 = (char *)dword_30007B0;
        if ( *(_BYTE *)(dword_30007B0 + 708) != 1 )
          return v16;
        v3 = 5;
        goto _08132FD4;
      case 0x13u:
        if ( MenuUpdateWindowText() << 24 )
        {
          *(_BYTE *)dword_30007B0 = 20;
          BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
        }
        return v16;
      case 0x14u:
        if ( v202F38F & 0x80 )
          return v16;
        sub_809D9F0(
          (int)dword_3004360,
          *(_BYTE *)(dword_30007B0 + 709),
          byte_3004350 - 1,
          (int)sub_81327A4,
          *(_WORD *)(dword_30007B0 + 32 + 2 * *(_BYTE *)(dword_30007B0 + 27)));
        v2 = (char *)dword_30007B0;
        v3 = 28;
        goto _08132FD4;
      case 0x15u:
        if ( MenuUpdateWindowText() << 24 )
          goto _08132FCE;
        return v16;
      case 0x16u:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        return v16;
      case 0xEu:
        BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
        v2 = (char *)dword_30007B0;
        v3 = *(_BYTE *)dword_30007B0 + 1;
        goto _08132FD4;
      case 0xFu:
        if ( !(v202F38F & 0x80) )
          SetMainCallback2((int)c2_exit_to_overworld_2_switch);
        return v16;
      case 0x1Cu:
        BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
        ++*(_BYTE *)dword_30007B0;
        v13 = sub_8132FEC();
        sub_8133800(v13);
        if ( !*(_BYTE *)(dword_30007B0 + 708) )
          sub_8133030(1);
        if ( *(_BYTE *)(dword_30007B0 + 708) == 1 )
        {
          word_2020068 = 72;
          sub_8133140(1);
        }
        sub_8133AEC(*(_BYTE *)(dword_30007B0 + 708), 1);
        return v16;
      case 0x1Du:
        if ( v202F38F & 0x80 )
          return v16;
        v2 = (char *)dword_30007B0;
        if ( *(_BYTE *)(dword_30007B0 + 710) == 4 )
        {
          v3 = 24;
_08132FD4:
          *v2 = v3;
        }
        else
        {
          v14 = GetMonData(
                  (int)&dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)],
                  *(_BYTE *)(dword_30007B0 + 710) + 13,
                  dword_30007B0 + 710);
          StringCopy(&gStringVar3, &gMoveNames[13 * v14]);
          sub_803DE34((int)&dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)], *(_BYTE *)(dword_30007B0 + 710));
          SetMonMoveSlot(
            (int)&dword_3004360[25 * *(_BYTE *)(dword_30007B0 + 709)],
            *(_WORD *)(dword_30007B0 + 32 + 2 * *(_BYTE *)(dword_30007B0 + 27)),
            *(_BYTE *)(dword_30007B0 + 710));
          StringCopy(gStringVar2, &gMoveNames[13 * *(_WORD *)(dword_30007B0 + 32 + 2 * *(_BYTE *)(dword_30007B0 + 27))]);
          sub_81328E8((unsigned __int8 *)&gUnknown_0842CD77);
          *(_BYTE *)dword_30007B0 = 30;
          v202E8CC = 1;
        }
        break;
      case 0x1Eu:
        if ( MenuUpdateWindowText() << 24 )
        {
          sub_81328E8((unsigned __int8 *)&gUnknown_0842CDA3);
          *(_BYTE *)dword_30007B0 = 31;
          fanfare_play(0x16Fu);
        }
        return v16;
      case 0x1Fu:
        if ( !(MenuUpdateWindowText() << 24) )
          return v16;
        fanfare_play(0x16Fu);
        v2 = (char *)dword_30007B0;
        v3 = 32;
        goto _08132FD4;
      case 0x20u:
        if ( !(task_is_not_running_overworld_fanfare() << 24) )
          return v16;
        v2 = (char *)dword_30007B0;
        v3 = 33;
        goto _08132FD4;
      case 0x21u:
        if ( !(word_300179E & 1) )
          return v16;
        audio_play(5u);
        goto _08132FCE;
      default:
        return v16;
    }
  }
  return v16;
}
