signed int __fastcall s9E_checkarray_HM_animation(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v202E8BC = VarGet(v2);
  script_setup_asm_script(v1, (int)sub_8067B48);
  return 1;
}
