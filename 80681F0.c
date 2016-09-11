signed int sub_80681F0()
{
  char *v0; // r4@1
  signed int result; // r0@2

  v0 = (char *)TryGetScriptOnPressingA();
  if ( v0 )
  {
    if ( v0 != gUnknown_0815281E
      && v0 != LittlerootTown_MaysHouse_2F_EventScript_152C39
      && (_UNKNOWN *)v0 != &gUnknown_0815F36C
      && (_UNKNOWN *)v0 != &gUnknown_0815F43A
      && (_UNKNOWN *)v0 != &gUnknown_081A0009 )
    {
      audio_play(5);
    }
    script_env_1_execute_new_script((int)v0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
