int sub_8028B70()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = (battle_side_get_owner(v2024C07) ^ 1) & 0xFF;
  if ( *(_BYTE *)(12 * v0 + 0x2024C86) == 3 )
  {
    *(_BYTE *)(20 * v2024C07 + 0x2024D68) |= 0x20u;
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_WORD *)(2 * v0 + 0x2024C7A) |= 0x10u;
    ++*(_BYTE *)(12 * v0 + 0x2024C86);
    v2024C10 += 5;
  }
  return v2;
}
