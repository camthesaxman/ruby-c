int atkD0_settaunt()
{
  int v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(28 * v2024C08 + 0x2024CBB);
  if ( v0 << 28 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(28 * v2024C08 + 0x2024CBB) = v0 & 0xF0 | 2;
    *(_BYTE *)(28 * v2024C08 + 0x2024CBB) = *(_BYTE *)(28 * v2024C08 + 0x2024CBB) & 0xF | 0x20;
    v2024C10 += 5;
  }
  return v2;
}
