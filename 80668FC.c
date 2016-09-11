int __fastcall sub_80668FC(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  _WORD *v3; // r5@1
  unsigned __int16 v4; // r0@1
  _WORD *v5; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (_WORD *)GetVarPointer(v2);
  v4 = script_read_halfword(v1);
  v5 = (_WORD *)GetVarPointer(v4);
  *v3 = v2025734;
  *v5 = v2025736;
  return 0;
}
