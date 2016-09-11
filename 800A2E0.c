int __fastcall task_new_game_prof_birch_speech_2(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  char *v3; // r1@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 11) )
  {
    --*((_WORD *)v2 + 11);
  }
  else
  {
    v3 = &gSprites[68 * *((_BYTE *)v2 + 24)];
    *((_WORD *)v3 + 16) = 136;
    *((_WORD *)v3 + 17) = 60;
    v3[62] &= 0xFBu;
    v3[1] = v3[1] & 0xF3 | 4;
    sub_800B534(a1, 10);
    sub_800B6C0(v1, 20);
    *((_WORD *)v2 + 11) = 80;
    *v2 = (int)task_new_game_prof_birch_speech_3;
  }
  return v5;
}
