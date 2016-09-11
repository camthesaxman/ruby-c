signed int safari_step()
{
  int v0; // r0@2
  signed int result; // r0@3

  if ( GetSafariZoneFlag() && (sub_80C8508(), v0 = v203880A - 1, --v203880A, !(v0 << 16)) )
  {
    script_env_1_execute_new_script((int)&gUnknown_081C3448);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
