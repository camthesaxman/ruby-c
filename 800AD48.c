int __fastcall task_new_game_prof_birch_speech_part2_7(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  char *v3; // r1@2
  char *v4; // r1@2
  char *v5; // r0@3
  char *v6; // r1@3
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 9) )
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 12)];
    v3[1] &= 0xF3u;
    v4 = &gSprites[68 * *((_WORD *)v2 + 13)];
    v4[1] &= 0xF3u;
    if ( MenuUpdateWindowText_OverrideLineLength(24) << 24 )
    {
      v5 = &gSprites[68 * *((_WORD *)v2 + 12)];
      v5[1] = v5[1] & 0xF3 | 4;
      v6 = &gSprites[68 * *((_WORD *)v2 + 13)];
      v6[1] = v6[1] & 0xF3 | 4;
      sub_800B458(v1, 2);
      sub_800B614(v1, 1);
      *((_WORD *)v2 + 11) = 64;
      *v2 = (int)task_new_game_prof_birch_speech_part2_8;
    }
  }
  return v8;
}
