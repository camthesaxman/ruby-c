int __fastcall sub_810D410(__int16 a1)
{
  __int16 v1; // r4@1
  unsigned __int16 *v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16 *)GetVarPointer(0x4049u);
  *v2 += v1;
  *v2 %= 7u;
  return v4;
}
