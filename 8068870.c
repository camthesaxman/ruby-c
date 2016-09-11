signed int __fastcall sub_8068870(char a1)
{
  signed int result; // r0@2

  if ( sub_8057818(a1) << 24 )
  {
    script_env_1_execute_new_script((int)&GraniteCave_B1F_EventScript_1C6BC5);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
