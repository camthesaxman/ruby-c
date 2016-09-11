int sub_80C824C()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( v2038808 )
  {
    SetMainCallback2((int)c2_exit_to_overworld_2_switch);
  }
  else if ( v2024D26 == 8 )
  {
    script_env_2_execute_new_script((int)&gUnknown_081C340A);
    warp_in();
    dword_300485C = (int)sub_8080E44;
    SetMainCallback2((int)c2_load_new_map);
  }
  else if ( v2024D26 == 7 )
  {
    script_env_1_execute_new_script((int)&gUnknown_081C3459);
    sub_80655F0();
    SetMainCallback2((int)c2_exit_to_overworld_1_continue_scripts_restart_music);
  }
  return v1;
}
