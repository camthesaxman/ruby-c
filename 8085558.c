signed int sub_8085558()
{
  int v0; // r0@1
  int v1; // r4@2
  signed int result; // r0@3

  v0 = (unsigned __int16)VarGet(16417);
  if ( !v0 || (v1 = (v0 - 1) & 0xFFFF, VarSet(0x4021u, v0 - 1), v1) )
  {
    result = 0;
  }
  else
  {
    script_env_1_execute_new_script((int)&Event_RepelWoreOff);
    result = 1;
  }
  return result;
}
