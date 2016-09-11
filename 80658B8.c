int __fastcall sub_80658B8(int a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  _WORD *v3; // r6@1
  int v4; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = (_WORD *)GetVarPointer(v2);
  v4 = script_read_halfword(v1);
  *v3 = call_via_r0(*(void **)((char *)&gSpecials + (4 * v4 & 0x3FFFF)));
  return 0;
}
