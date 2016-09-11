int __fastcall sub_812C118(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    script_env_1_execute_new_script((int)&SweetScentNothingHereScript);
    DestroyTask(v1);
  }
  return v3;
}
