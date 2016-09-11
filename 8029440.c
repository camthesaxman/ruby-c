int atkBC_maxattackhalvehp()
{
  unsigned int v0; // r1@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 1;
  if ( !v0 )
    v0 = 1;
  if ( (signed int)*(_BYTE *)(88 * v2024C07 + 0x2024A99) > 11 || *(_WORD *)(88 * v2024C07 + 0x2024AA8) <= v0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(88 * v2024C07 + 0x2024A99) = 12;
    v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 1;
    if ( !v2024BEC )
      v2024BEC = 1;
    v2024C10 += 5;
  }
  return v2;
}
