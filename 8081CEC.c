int sub_8081CEC()
{
  __int16 v1; // [sp+0h] [bp-8h]@1
  int v2; // [sp+4h] [bp-4h]@4

  v1 = 0;
  CpuSet(&v1, 83886080, 16777472);
  ResetOamRange(0, 0x80u);
  if ( battle_exit_is_player_defeat(v2024D26) == 1 )
    SetMainCallback2((int)c2_whiteout);
  else
    SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  return v2;
}
