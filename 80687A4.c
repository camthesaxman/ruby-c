signed int sub_80687A4()
{
  signed int result; // r0@4

  if ( FlagGet(2061) << 24 && v202E83F == 5 && (sub_8068F18() & 0xFF) == 1 )
  {
    script_env_1_execute_new_script((int)&UnderwaterUseDiveScript);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
