int sub_80510E8()
{
  unsigned int v0; // r0@1
  _BYTE *v1; // r0@9
  const char *v2; // r0@9
  _BYTE *v3; // r0@10
  int v4; // r0@19
  int v5; // r0@19
  int v7; // [sp+0h] [bp-4h]@0

  v0 = *(_BYTE *)(dword_3004854 + 111);
  if ( v0 <= 0xA )
  {
    switch ( v0 )
    {
      case 0u:
        if ( (unsigned int)*(_WORD *)(dword_3004854 + 124) <= 1 )
          *(_BYTE *)(dword_3004854 + 111) = 9;
        if ( *(_WORD *)(dword_3004854 + 124) == 2 )
          *(_BYTE *)(dword_3004854 + 111) = 2;
        v0 = *(_WORD *)(dword_3004854 + 124);
        if ( v0 == 3 )
        {
          v0 = 1;
          *(_BYTE *)(dword_3004854 + 111) = 1;
        }
        break;
      case 1u:
        v1 = (_BYTE *)(dword_3004854 + 111);
        *v1 = 3;
        sub_814A7FC(v1);
        MenuZeroFillWindowRect(23, 8, 28, 13);
        v2 = "Óãéæ";
        goto _080511AC;
      case 2u:
        v3 = (_BYTE *)(dword_3004854 + 111);
        *v3 = *(_BYTE *)(dword_3004854 + 111) + 1;
        sub_814A7FC(v3);
        MenuZeroFillWindowRect(23, 8, 28, 13);
        v2 = "Óãé´êÙ";
_080511AC:
        v0 = MenuPrintMessage(v2, 1, 15);
        break;
      case 3u:
        v0 = MenuUpdateWindowText() << 24;
        if ( v0 )
        {
          v0 = dword_3004854 + 111;
          *(_BYTE *)(dword_3004854 + 111) = 9;
        }
        break;
      case 9u:
        BeginFastPaletteFade(3);
        v0 = *(_BYTE *)(dword_3004854 + 111) + 1;
        *(_BYTE *)(dword_3004854 + 111) = v0;
        break;
      case 0xAu:
        v0 = v202F38F & 0x80;
        if ( !(v202F38F & 0x80) )
        {
          if ( *(_WORD *)(dword_3004854 + 124) )
            v0 = SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
          else
            v0 = SetMainCallback2((int)sub_804E538);
        }
        break;
      default:
        break;
    }
  }
  v4 = sub_805123C(v0);
  RunTasks(v4);
  AnimateSprites();
  v5 = BuildOamBuffer();
  UpdatePaletteFade(v5);
  return v7;
}
