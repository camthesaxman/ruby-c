int sub_804300C()
{
  void (*v0)(); // r0@1
  int v1; // r1@5
  int v2; // r0@18
  unsigned int v3; // r2@18
  __int16 v4; // r0@21
  int v5; // r1@21
  char v6; // r0@21
  int v7; // r0@27
  int v9; // [sp+20h] [bp-4h]@0

  v0 = (void (*)())*(_BYTE *)(dword_300481C + 2);
  if ( (unsigned int)v0 <= 0xB )
  {
    switch ( v0 )
    {
      case 0u:
        BeginNormalPaletteFade(-1, 0, 16, 0);
        v4000000 = 5952;
        ++*(_BYTE *)(dword_300481C + 2);
        v0 = (void (*)())CreateTask(c3_080472E4, 5);
        break;
      case 1u:
        v0 = (void (*)())((unsigned __int8)(v202F38F & 0x80) << 24);
        if ( !(v202F38F & 0x80) )
        {
          *(_BYTE *)(dword_300481C + 3) = 0;
          v1 = dword_300481C;
          goto _0804329C;
        }
        break;
      case 2u:
        LOBYTE(v0) = *(_BYTE *)(dword_300481C + 3) + 1;
        *(_BYTE *)(dword_300481C + 3) = (_BYTE)v0;
        v0 = (void (*)())(unsigned __int8)v0;
        if ( (unsigned __int8)v0 > 0x1Eu )
        {
          ++*(_BYTE *)(dword_300481C + 2);
          v0 = (void (*)())&dword_2020020[17 * *(_BYTE *)dword_300481C];
          *(_DWORD *)v0 = sub_80432E4;
        }
        break;
      case 3u:
        v0 = SpriteCallbackDummy;
        if ( (void (*)())dword_2020020[17 * *(_BYTE *)dword_300481C] == SpriteCallbackDummy )
        {
          v0 = (void (*)())(*(_BYTE *)(dword_300481C + 2) + 1);
          *(_BYTE *)(dword_300481C + 2) = (_BYTE)v0;
        }
        break;
      case 4u:
        pokemon_get_nick((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], (int)&gStringVar1);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0842CC38);
        sub_80436FC(&gStringVar4);
        fanfare_play(371);
        v1 = dword_300481C;
        goto _0804329C;
      case 5u:
        v0 = (void (*)())(task_is_not_running_overworld_fanfare() << 24);
        if ( v0 )
          goto _08043298;
        break;
      case 6u:
        v0 = (void (*)())(task_is_not_running_overworld_fanfare() << 24);
        if ( v0 )
          goto _08043298;
        break;
      case 7u:
        pokemon_get_nick((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], (int)&gStringVar1);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0842CC5A);
        sub_80436D4(&gStringVar4);
        v1 = dword_300481C;
        goto _0804329C;
      case 8u:
        v0 = (void (*)())(sub_8043724() << 24);
        if ( !v0 )
          break;
        MenuDrawTextWindow(22, 8, 27, 13);
        InitYesNoMenu(22, 8, 4);
        goto _08043298;
      case 9u:
        v2 = ProcessMenuInputNoWrap_() << 24;
        v3 = (unsigned int)v2 >> 24;
        v0 = (void (*)())(v2 >> 24);
        if ( v0 == (void (*)())-2 )
          break;
        if ( (char)v3 == -1 || (char)v3 == 1 )
          goto _08043298;
        pokemon_get_nick((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], (int)&gStringVar3);
        v4 = GetMonData((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], 11, (int)&dword_300481C);
        v5 = 100 * *(_BYTE *)(dword_300481C + 4);
        v6 = GetMonGender();
        GetMonData((int)&dword_3004360[25 * *(_BYTE *)(dword_300481C + 4)], 0, 0);
        v0 = (void (*)())DoNamingScreen(3);
        break;
      case 0xAu:
        BeginNormalPaletteFade(-1, 0, 0, 16);
_08043298:
        v1 = dword_300481C;
_0804329C:
        v0 = (void (*)())(*(_BYTE *)(v1 + 2) + 1);
        *(_BYTE *)(v1 + 2) = (_BYTE)v0;
        break;
      case 0xBu:
        v0 = (void (*)())(v202F38F & 0x80);
        if ( !(v202F38F & 0x80) )
          v0 = (void (*)())SetMainCallback2((int)c2_exit_to_overworld_2_switch);
        break;
      default:
        break;
    }
  }
  RunTasks(v0);
  AnimateSprites();
  v7 = BuildOamBuffer();
  UpdatePaletteFade(v7);
  return v9;
}
