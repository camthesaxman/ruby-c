int sub_801FDB4()
{
  signed int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2024C10 + 1);
  if ( v0 == 1 )
  {
    v1 = battle_get_per_side_status(v2024C07);
  }
  else
  {
    v1 = battle_get_per_side_status(v2024C08);
    v0 = 1;
  }
  if ( (*(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8)) & *(_WORD *)(2 * (v0 & v1) + 0x2024C7A) )
    v2024C10 = *(_BYTE *)(v2024C10 + 4)
             + (*(_BYTE *)(v2024C10 + 5) << 8)
             + (*(_BYTE *)(v2024C10 + 6) << 16)
             + (*(_BYTE *)(v2024C10 + 7) << 24);
  else
    v2024C10 += 8;
  return v3;
}
