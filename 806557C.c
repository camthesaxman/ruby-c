signed int script_env_2_run_current_script()
{
  if ( byte_30005B0 != 2 && byte_30005B0 != 1 )
  {
    script_env_2_enable();
    if ( sub_80653EC((int)&unk_30005B8) << 24 )
      return 1;
    byte_30005B0 = 2;
    script_env_2_disable();
  }
  return 0;
}
