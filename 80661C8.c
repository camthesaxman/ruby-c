int __fastcall s2A_flag_clear(int a1)
{
  unsigned __int16 v1; // r0@1

  v1 = script_read_halfword(a1);
  FlagReset(v1);
  return 0;
}
