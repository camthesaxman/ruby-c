int __fastcall s8F_get_random_val(int a1)
{
  unsigned __int16 v1; // r0@1
  unsigned int v2; // r4@1

  v1 = script_read_halfword(a1);
  v2 = (unsigned __int16)VarGet(v1);
  v202E8DC = (unsigned __int16)Random() % v2;
  return 0;
}
