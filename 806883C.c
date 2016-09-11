signed int __fastcall mapheader_trigger_activate_at__run_now(int a1)
{
  int v1; // r0@1
  signed int result; // r0@2

  v1 = mapheader_trigger_activate_at(
         33744936,
         (*(_WORD *)a1 - 7) & 0xFFFF,
         (*(_WORD *)(a1 + 2) - 7) & 0xFFFF,
         *(_BYTE *)(a1 + 4));
  if ( v1 )
  {
    script_env_1_execute_new_script(v1);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
