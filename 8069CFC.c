int __fastcall sub_8069CFC(__int16 a1, __int16 a2)
{
  char v2; // r5@1
  int v3; // r4@1
  _WORD *v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( sub_8069CB8(a1, a2) )
  {
    v4 = (_WORD *)GetVarPointer(gUnknown_083763E4[v3]);
    *v4 |= 1 << (v2 - 3);
  }
  return v6;
}
