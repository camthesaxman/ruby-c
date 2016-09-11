int __fastcall sub_800A9EC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int v3; // r6@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = NameMenuProcessInput();
  v3 = v2 << 24;
  if ( (_BYTE)v2 )
  {
    if ( (char)v2 > 0 )
    {
      if ( (char)v2 <= 4 )
      {
        sub_8072DEC();
        audio_play(5);
        MenuZeroFillWindowRect(2, 1, 22, 12);
        set_default_player_name(v3 >> 24);
        dword_3004B20[10 * v1] = (int)task_new_game_prof_birch_speech_part2_1;
      }
    }
    else if ( (char)v2 == -1 )
    {
      sub_8072DEC();
      audio_play(5);
      MenuZeroFillWindowRect(2, 1, 22, 12);
      dword_3004B20[10 * v1] = (int)task_new_game_prof_birch_speech_14;
    }
  }
  else
  {
    audio_play(5);
    BeginNormalPaletteFade(-1, 0, 0, 16);
    dword_3004B20[10 * v1] = (int)sub_800AAAC;
  }
  return v5;
}
