int atk82_jumpifnotfirstturn()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(28 * v2024C07 + 0x2024CBE) )
    v2024C10 += 5;
  else
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v1;
}
