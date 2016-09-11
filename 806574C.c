int mapheader_run_first_tag4_script_list_match()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = mapheader_get_first_match_from_tagged_ptr_list(4u);
  if ( v0 )
    script_env_2_execute_new_script(v0);
  return v2;
}
