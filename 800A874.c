int __fastcall task_new_game_prof_birch_speech_17(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r5@1
  int v3; // r5@4
  char *v4; // r2@6
  int *v5; // r4@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_BYTE *)v1 + 12);
  if ( *((_WORD *)v1 + 9) )
  {
    gSprites[68 * v2 + 62] |= 4u;
    if ( *((_WORD *)v1 + 10) )
      v3 = *((_BYTE *)v1 + 30);
    else
      v3 = *((_BYTE *)v1 + 28);
    v4 = &gSprites[68 * v3];
    *((_WORD *)v4 + 16) = 240;
    *((_WORD *)v4 + 17) = 60;
    v4[62] &= 0xFBu;
    v5 = &dword_3004B20[10 * a1];
    *((_WORD *)v5 + 6) = v3;
    v4[1] = v4[1] & 0xF3 | 4;
    sub_800B534(a1, 0);
    *v5 = (int)task_new_game_prof_birch_speech_18;
  }
  else
  {
    *(_WORD *)&gSprites[68 * v2 + 32] += 4;
  }
  return v7;
}
