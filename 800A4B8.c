int __fastcall task_new_game_prof_birch_speech_7(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@2
  int *v3; // r2@4
  __int16 v4; // r3@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( sub_8075374() << 24 )
  {
    v2 = &dword_3004B20[10 * v1];
    if ( (signed int)*((_WORD *)v2 + 11) > 95 )
    {
      MenuSetText(&SystemText_NewPara);
      *v2 = (int)task_new_game_prof_birch_speech_8;
    }
  }
  v3 = &dword_3004B20[10 * v1];
  v4 = *((_WORD *)v3 + 11);
  if ( (signed int)*((_WORD *)v3 + 11) <= 0x3FFF )
  {
    *((_WORD *)v3 + 11) = v4 + 1;
    if ( (signed __int16)(v4 + 1) == 32 )
      cry_related(350, 0);
  }
  return v6;
}
