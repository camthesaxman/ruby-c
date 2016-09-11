int __fastcall sub_800AC20(unsigned __int8 a1)
{
  int *v1; // r2@1
  __int16 v2; // r1@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 8) )
  {
    v2 = *((_WORD *)v1 + 8) + 2;
    *((_WORD *)v1 + 8) = v2;
    v4000014 = v2;
  }
  else
  {
    *v1 = (int)task_new_game_prof_birch_speech_part2_6;
  }
  return v4;
}
