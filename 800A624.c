int __fastcall task_new_game_prof_birch_speech_11(unsigned __int8 a1)
{
  int *v1; // r2@1
  __int16 v2; // r3@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 8);
  if ( *((_WORD *)v1 + 8) == -60 )
  {
    *((_WORD *)v1 + 8) = -60;
    *v1 = (int)task_new_game_prof_birch_speech_12;
  }
  else
  {
    *((_WORD *)v1 + 8) = v2 - 2;
    v4000014 = v2 - 2;
  }
  return v4;
}
