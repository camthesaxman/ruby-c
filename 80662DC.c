signed int __fastcall s28_pause(int a1)
{
  int v1; // r4@1

  v1 = a1;
  v202E8B4 = script_read_halfword(a1);
  script_setup_asm_script(v1, (int)s28_pause_asm);
  return 1;
}
