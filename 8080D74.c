int __fastcall task_map_chg_seq_0807E2CC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) )
  {
    if ( *((_WORD *)v2 + 4) == 1 && sub_8080E70() )
    {
      sub_806451C();
      script_env_2_disable();
      DestroyTask(v1);
    }
  }
  else
  {
    player_bitmagic();
    script_env_2_enable();
    ++*((_WORD *)v2 + 4);
  }
  return v4;
}
