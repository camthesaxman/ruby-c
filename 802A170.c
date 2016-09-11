int sub_802A170()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = battle_get_per_side_status(v2024C07);
  v2024C08 = battle_get_side_with_given_state((v0 ^ 2) & 0xFF);
  if ( !(v20239F8 & 1)
    || v2024C0C & gBitTable[v2024C08]
    || *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 8
    || *(_BYTE *)(16 * v2024C08 + 0x2024D28) & 8 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(16 * v2024C08 + 0x2024D28) |= 8u;
    v2024C10 += 5;
  }
  return v2;
}
