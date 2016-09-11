signed int __fastcall sub_8066F58(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( is_c1_link_related_active() )
  {
    result = 0;
  }
  else
  {
    sub_8064D20();
    script_setup_asm_script(v1, (int)sub_8064CFC);
    result = 1;
  }
  return result;
}
