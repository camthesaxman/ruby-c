int sub_8082228()
{
  int v1; // [sp+0h] [bp-4h]@0

  sav1_reset_battle_music_maybe();
  SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  return v1;
}
