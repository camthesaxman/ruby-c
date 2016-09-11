int atk72_flee()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( sub_8014AB8(v2024C09) << 24 )
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  else
    v2024C10 += 5;
  return v1;
}
