int ContestEffect_38()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( (signed int)*(_BYTE *)(28 * v20192E1 + 0x201926D) > 29 )
  {
    sub_80B13EC(v20192E1, 58);
  }
  else
  {
    *(_BYTE *)(28 * v20192E1 + 0x201926D) += 10;
    *(_BYTE *)(28 * v20192E1 + 0x2019270) = *(_BYTE *)(28 * v20192E1 + 0x2019270) & 0xCF | 0x10;
    sub_80B13EC(v20192E1, 35);
  }
  return v1;
}
