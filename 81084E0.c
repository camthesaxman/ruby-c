int tai29_unk()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( (unsigned __int8)b_first_side(v2024C07, v2024C08, 1u) == *(_BYTE *)(v2039238 + 1) )
    v2039238 += 6;
  else
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
