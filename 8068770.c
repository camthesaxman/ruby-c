signed int sub_8068770()
{
  signed int result; // r0@3

  if ( FlagGet(2061) << 24 && (sub_8068F18() & 0xFF) == 2 )
  {
    script_env_1_execute_new_script((int)&UseDiveScript);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
