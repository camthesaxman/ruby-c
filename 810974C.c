int dp15_compare_attacker_defender_levels()
{
  signed int v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = *(_BYTE *)(v2039238 + 1);
  if ( v0 == 1 )
  {
    if ( *(_BYTE *)(88 * v2024C07 + 0x2024AAA) < (unsigned int)*(_BYTE *)(88 * v2024C08 + 0x2024AAA) )
      goto _081097F2;
_08109818:
    v2039238 += 6;
    return v2;
  }
  if ( v0 > 1 )
  {
    if ( v0 != 2 )
      return v2;
    if ( *(_BYTE *)(88 * v2024C07 + 0x2024AAA) == *(_BYTE *)(88 * v2024C08 + 0x2024AAA) )
      goto _081097F2;
    goto _08109818;
  }
  if ( *(_BYTE *)(v2039238 + 1) )
    return v2;
  if ( *(_BYTE *)(88 * v2024C07 + 0x2024AAA) <= (unsigned int)*(_BYTE *)(88 * v2024C08 + 0x2024AAA) )
    goto _08109818;
_081097F2:
  v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v2;
}
