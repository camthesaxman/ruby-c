int sub_80C55C8()
{
  __int16 v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = v2039270;
  if ( v2039270 )
  {
    sub_80C5604();
    v202E8DC = 1;
  }
  else
  {
    copy_player_party_from_sav1();
    v202E8DC = v0;
  }
  SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  return v2;
}
