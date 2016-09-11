int __fastcall mapheader_run_script_by_tag(unsigned __int8 a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = mapheader_get_tagged_pointer(a1);
  if ( v1 )
    script_env_2_execute_new_script(v1);
  return v3;
}
