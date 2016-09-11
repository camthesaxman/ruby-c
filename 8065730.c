signed int mapheader_run_first_tag2_script_list_match()
{
  int v0; // r0@1
  signed int result; // r0@2

  v0 = mapheader_get_first_match_from_tagged_ptr_list(2u);
  if ( v0 )
  {
    script_env_1_execute_new_script(v0);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
