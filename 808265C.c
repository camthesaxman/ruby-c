int do_choose_name_or_words_screen()
{
  int v0; // r0@5
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202FF5E == 1024 )
  {
    SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  }
  else if ( battle_exit_is_player_defeat(v2024D26) == 1 )
  {
    SetMainCallback2((int)c2_whiteout);
  }
  else
  {
    SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
    v0 = sub_808257C();
    sub_8082CB8(v0);
  }
  return v2;
}
