signed int __fastcall s51_waitmove(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  __int16 v3; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  if ( v3 )
    v202E8B6 = v3;
  v202E8B8 = v2025738;
  v202E8BA = v2025739;
  script_setup_asm_script(v1, (int)s51a_0806B288);
  return 1;
}
