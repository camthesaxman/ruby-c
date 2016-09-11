int __fastcall task_p5_load_battle_screen_elements(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v3; // r3@1
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14);
  if ( !*((_WORD *)v2 + 14) )
  {
    BeginHardwarePaletteFade(0xE8u, 0, 0, 0x10u, *((_WORD *)v2 + 14));
    ++*((_WORD *)v2 + 14);
    return v5;
  }
  if ( v202F38F & 0x80 )
    return v5;
  if ( v3 == 1 )
  {
    ++*((_WORD *)v2 + 14);
    v202F7C5 = 2;
_08076D84:
    if ( !(v202F38F & 0x80) && LOWORD(dword_3004B20[10 * a1 + 7]) == 3 )
    {
      DestroyTask(a1);
      v202F7C5 = 0;
    }
    return v5;
  }
  if ( v3 != 2 )
    goto _08076D84;
  if ( *((_WORD *)v2 + 4) == -1 )
    dp01t_11_3_message_for_player_only();
  else
    sub_8076DB8(*((_WORD *)v2 + 4));
  BeginHardwarePaletteFade(0xE8u, 0, 0x10u, 0, 1);
  ++LOWORD(dword_3004B20[10 * v1 + 7]);
  return v5;
}
