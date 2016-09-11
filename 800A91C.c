int __fastcall task_new_game_prof_birch_speech_18(unsigned __int8 a1)
{
  int *v1; // r3@1
  char *v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &gSprites[68 * *((_BYTE *)v1 + 12)];
  if ( (signed int)*((_WORD *)v2 + 16) <= 180 )
  {
    *((_WORD *)v2 + 16) = 180;
    if ( *((_WORD *)v1 + 9) )
    {
      v2[1] &= 0xF3u;
      *v1 = (int)task_new_game_prof_birch_speech_16;
    }
  }
  else
  {
    *((_WORD *)v2 + 16) -= 4;
  }
  return v4;
}
