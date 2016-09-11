int __fastcall task_new_game_prof_birch_speech_part2_4(unsigned __int8 a1)
{
  int v1; // r5@1
  char v2; // r0@1
  int *v3; // r4@7
  char *v4; // r0@7
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = ProcessMenuInputNoWrap_();
  if ( v2 )
  {
    if ( v2 > 0 )
    {
      if ( v2 != 1 )
        return v6;
    }
    else if ( v2 != -1 )
    {
      return v6;
    }
    audio_play(5);
    MenuZeroFillWindowRect(2, 1, 8, 7);
    dword_3004B20[10 * v1] = (int)task_new_game_prof_birch_speech_14;
  }
  else
  {
    audio_play(5);
    MenuZeroFillWindowRect(2, 1, 8, 7);
    v3 = &dword_3004B20[10 * v1];
    v4 = &gSprites[68 * *((_WORD *)v3 + 6)];
    v4[1] = v4[1] & 0xF3 | 4;
    sub_800B458(v1, 2);
    sub_800B614(v1, 1);
    *v3 = (int)sub_800AC20;
  }
  return v6;
}
