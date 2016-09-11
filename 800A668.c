int __fastcall task_new_game_prof_birch_speech_12(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  char *v3; // r0@2
  char *v4; // r0@2
  int v5; // r3@4
  char *v6; // r1@4
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 9) )
  {
    v3 = &gSprites[68 * *((_WORD *)v2 + 12) + 62];
    *v3 |= 4u;
    v4 = &gSprites[68 * *((_WORD *)v2 + 13) + 62];
    *v4 |= 4u;
    if ( *((_WORD *)v2 + 11) )
    {
      --*((_WORD *)v2 + 11);
    }
    else
    {
      v5 = *((_BYTE *)v2 + 28);
      v6 = &gSprites[68 * v5];
      *((_WORD *)v6 + 16) = 180;
      *((_WORD *)v6 + 17) = 60;
      v6[62] &= 0xFBu;
      v6[1] = v6[1] & 0xF3 | 4;
      *((_WORD *)v2 + 6) = v5;
      *((_WORD *)v2 + 10) = 0;
      sub_800B534(v1, 2);
      sub_800B6C0(v1, 1);
      *v2 = (int)task_new_game_prof_birch_speech_13;
    }
  }
  return v8;
}
