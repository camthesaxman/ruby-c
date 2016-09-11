int __fastcall s29_flag_set(int a1)
{
  unsigned __int16 v1; // r0@1

  v1 = script_read_halfword(a1);
  FlagSet(v1);
  return 0;
}
