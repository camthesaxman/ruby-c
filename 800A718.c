int __fastcall task_new_game_prof_birch_speech_13(unsigned __int8 a1)
{
  int *v1; // r3@1
  char *v2; // r1@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 9) )
  {
    v2 = &gSprites[68 * *((_WORD *)v1 + 6)];
    v2[1] &= 0xF3u;
    *v1 = (int)task_new_game_prof_birch_speech_14;
  }
  return v4;
}
