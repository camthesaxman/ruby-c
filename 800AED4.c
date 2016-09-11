int __fastcall task_new_game_prof_birch_speech_part2_9(unsigned __int8 a1)
{
  int *v1; // r6@1
  char *v2; // r1@2
  unsigned int v3; // r4@3
  int v5; // [sp+14h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 9) )
  {
    v2 = &gSprites[68 * *((_WORD *)v1 + 6)];
    v2[1] &= 0xF3u;
    if ( MenuUpdateWindowText_OverrideLineLength(24) << 24 )
    {
      v3 = 68 * *((_BYTE *)v1 + 12);
      gSprites[v3 + 1] = gSprites[v3 + 1] & 0xFC | 1;
      *(_DWORD *)((char *)&unk_2020014 + v3) = &gSpriteAffineAnimTable_81E79AC;
      InitSpriteAffineAnim((int)&gSprites[v3]);
      StartSpriteAffineAnim((int)&gSprites[v3], 0);
      dword_2020020[v3 / 4] = (int)sub_800B240;
      BeginNormalPaletteFade(0xFFFF, 0, 0, 16);
      play_sound_effect(4);
      *v1 = (int)task_new_game_prof_birch_speech_part2_10;
    }
  }
  return v5;
}
