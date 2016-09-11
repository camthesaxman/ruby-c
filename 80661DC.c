int __fastcall s2B_flag_check(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  *(_BYTE *)(v1 + 2) = FlagGet(v2);
  return 0;
}
