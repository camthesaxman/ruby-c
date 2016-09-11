int __fastcall s17_u16_gvar_add_const(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  _WORD *v3; // r4@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (_WORD *)GetVarPointer(v2);
  *v3 += script_read_halfword(v1);
  return 0;
}
