int sub_80C79CC()
{
  int v0; // r5@1
  signed int i; // r3@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = GetVarPointer(0x4000u);
  for ( i = 0; i < v2038804; ++i )
    *(_BYTE *)(v0 + i) = *(_BYTE *)(8 * i + v2038800 + 5);
  return v3;
}
