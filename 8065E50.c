int __fastcall s21_cmp_u16_gvar_const(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  int v3; // r5@1
  unsigned __int16 v4; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = *(_WORD *)GetVarPointer(v2);
  v4 = script_read_halfword(v1);
  *(_BYTE *)(v1 + 2) = compare_012(v3, v4);
  return 0;
}
