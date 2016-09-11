int sub_8135BA0()
{
  int v0; // r5@1
  unsigned int v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = v20253F8 & 1;
  v1 = v202E8CC;
  if ( v202E8CC == 3 || !v202E8CC )
  {
    if ( (unsigned int)*(_WORD *)(2 * v0 + 0x2025400) > 1 || (v1 = *(_WORD *)(2 * v0 + 0x20253FC), v1 > 1) )
      v1 = sub_8135AC4();
  }
  sub_8135CFC(v1);
  v20253F9 = v2024D26;
  if ( v202E8CC != 3 )
    *(_BYTE *)(v0 + 33707002) = v202E8CC;
  VarSet(0x4000u, 0);
  v20253F8 |= 2u;
  sub_8125D44(2u);
  return v3;
}
