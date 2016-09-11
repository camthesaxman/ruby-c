int __fastcall task_new_game_prof_birch_speech_10(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@2
  char *v3; // r1@2
  char *v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( MenuUpdateWindowText_OverrideLineLength(24) << 24 )
  {
    v2 = &dword_3004B20[10 * v1];
    v3 = &gSprites[68 * *((_WORD *)v2 + 12)];
    v3[1] = v3[1] & 0xF3 | 4;
    v4 = &gSprites[68 * *((_WORD *)v2 + 13)];
    v4[1] = v4[1] & 0xF3 | 4;
    sub_800B458(v1, 2);
    sub_800B614(v1, 1);
    *((_WORD *)v2 + 11) = 64;
    *v2 = (int)task_new_game_prof_birch_speech_11;
  }
  return v6;
}
