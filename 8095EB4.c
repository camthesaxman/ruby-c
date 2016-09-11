int __fastcall sub_8095EB4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r2@6
  int v5; // r1@6
  int v6; // r3@12
  __int16 v7; // r0@16
  const char *v8; // r0@23
  __int16 v9; // r0@31
  char **v10; // r1@33
  int v11; // r0@33
  __int16 v12; // r0@35
  int v14; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        sub_8096168(*((_BYTE *)v2 + 10));
        MenuDisplayMessageBox();
        MenuPrint((int)off_83B6010[2 * *((_WORD *)v2 + 5)], 2, 0xFu);
        goto _08095F28;
      case 1u:
        if ( sub_807D770() << 24 )
_08095F28:
          ++*((_WORD *)v2 + 4);
        return v14;
      case 2u:
        *((_WORD *)v2 + 6) = (char)ProcessMenuInput();
        v5 = *((_WORD *)v2 + 6);
        if ( v5 == -1 )
          goto _08095FC8;
        if ( v5 > -1 )
        {
          if ( v5 == 3 )
          {
_08095FC8:
            sub_8072DEC(-1);
            MenuZeroFillWindowRect(0, 0, 0xDu, 9u);
            script_env_2_disable();
            script_env_2_enable_and_set_ctx_running();
            DestroyTask(v1);
            return v14;
          }
        }
        else if ( v5 == -2 )
        {
          v6 = *((_WORD *)v2 + 5);
          *((_WORD *)v2 + 7) = v6;
          if ( word_300179E & 0x40 )
          {
            *((_WORD *)v2 + 7) = v6 - 1;
            if ( (v6 - 1) & 0x8000 )
              *((_WORD *)v2 + 7) = 3;
          }
          if ( word_300179E & 0x80 )
          {
            v7 = *((_WORD *)v2 + 7) + 1;
            *((_WORD *)v2 + 7) = v7;
            if ( v7 > 3 )
              *((_WORD *)v2 + 7) = 0;
          }
          if ( (signed __int16)v6 != *((_WORD *)v2 + 7) )
          {
            *((_WORD *)v2 + 5) = *((_WORD *)v2 + 7);
            sub_8095EA0();
            MenuPrint((int)off_83B6010[2 * *((_WORD *)v2 + 5)], 2, 0xFu);
          }
          return v14;
        }
        if ( !*((_WORD *)v2 + 6) && (unsigned __int8)sub_8095C28(*((_WORD *)v2 + 6), v5, v4) == 6 )
        {
          sub_8095EA0();
          v8 = "Óãéæ";
_08096022:
          MenuPrint((int)v8, 2, 0xFu);
          *((_WORD *)v2 + 4) = 3;
          return v14;
        }
        if ( *((_WORD *)v2 + 6) == 1 && (unsigned __int8)sub_8095C28(1, 12, v4) == 1 )
        {
          sub_8095EA0();
          v8 = "ÎÜÙæÙ";
          goto _08096022;
        }
        fade_screen(1, 0);
        *((_WORD *)v2 + 4) = 4;
        break;
      case 3u:
        if ( word_300179E & 3 )
          goto _080960B8;
        if ( word_300179E & 0x40 )
        {
          v9 = *((_WORD *)v2 + 5) - 1;
          *((_WORD *)v2 + 5) = v9;
          if ( v9 & 0x8000 )
            *((_WORD *)v2 + 5) = 3;
          MoveMenuCursor(-1);
          *((_WORD *)v2 + 5) = (unsigned __int8)GetMenuCursorPos();
          sub_8095EA0();
          v10 = gUnknown_083B600C;
          v11 = *((_WORD *)v2 + 5);
        }
        else
        {
          if ( !(word_300179E & 0x80) )
            return v14;
          v12 = *((_WORD *)v2 + 5) + 1;
          *((_WORD *)v2 + 5) = v12;
          if ( v12 > 3 )
            *((_WORD *)v2 + 5) = 0;
          MoveMenuCursor(1);
          *((_WORD *)v2 + 5) = (unsigned __int8)GetMenuCursorPos();
_080960B8:
          sub_8095EA0();
          v10 = gUnknown_083B600C;
          v11 = *((_WORD *)v2 + 5);
        }
        MenuPrint((int)v10[2 * v11 + 1], 2, 0xFu);
        *((_WORD *)v2 + 4) = 2;
        return v14;
      case 4u:
        if ( !(v202F38F & 0x80) )
        {
          task_intro_29(*((_BYTE *)v2 + 12));
          DestroyTask(v1);
        }
        return v14;
      default:
        return v14;
    }
  }
  return v14;
}
