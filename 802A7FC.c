int atkDA_abilityswap()
{
  int v0; // r3@4
  char v1; // r1@7
  int v3; // [sp+Ch] [bp-4h]@0

  if ( (*(_BYTE *)(88 * v2024C07 + 0x2024AA0) || *(_BYTE *)(88 * v2024C08 + 0x2024AA0))
    && *(_BYTE *)(88 * v2024C07 + 0x2024AA0) != 25
    && (v0 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0), v0 != 25)
    && !(v2024C68 & 0x29) )
  {
    v1 = *(_BYTE *)(88 * v2024C07 + 0x2024AA0);
    *(_BYTE *)(88 * v2024C07 + 0x2024AA0) = v0;
    *(_BYTE *)(88 * v2024C08 + 0x2024AA0) = v1;
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v3;
}
