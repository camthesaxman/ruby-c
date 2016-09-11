int atkD4_802C408()
{
  int v0; // r0@5
  int v2; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)(v2024C10 + 1) )
  {
    if ( *(_BYTE *)(v2024C10 + 1) != 1 )
      return v2;
    byte_30041C0[0] = -3;
    byte_30041C1 = 4;
    LOBYTE(word_30041C2) = v2024C08;
    HIBYTE(word_30041C2) = *(_BYTE *)(v2024C08 + 0x2024DE0);
    byte_30041C4 = -1;
    v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C08 + 0x2024AAC) >> 1;
    if ( !v2024BEC )
      v2024BEC = 1;
    v2024BEC = -v2024BEC;
    if ( *(_WORD *)(88 * v2024C08 + 0x2024AA8) == *(_WORD *)(88 * v2024C08 + 0x2024AAC) )
      goto _0802A5C4;
    v0 = v2024C10 + 6;
_0802A5F2:
    v2024C10 = v0;
    return v2;
  }
  if ( !*(_BYTE *)(v2024C07 + 0x2024DDC) )
  {
    *(_BYTE *)(v2024C07 + 0x2024DDC) = 2;
    *(_BYTE *)(v2024C07 + 0x2024DE0) = *(_WORD *)(2 * v2024C07 + 0x2024A6A);
    v0 = v2024C10 + 6;
    goto _0802A5F2;
  }
_0802A5C4:
  v2024C10 = *(_BYTE *)(v2024C10 + 2) | (*(_BYTE *)(v2024C10 + 3) << 8) | (*(_BYTE *)(v2024C10 + 4) << 16) | (*(_BYTE *)(v2024C10 + 5) << 24);
  return v2;
}
