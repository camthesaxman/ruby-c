int sub_812AAAC()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *(_WORD *)(2 * *(_BYTE *)(v2039238 + 1) + 0x20192FE) <= (signed int)*(_WORD *)(2 * *(_BYTE *)(v2039238 + 2)
                                                                                    + 0x20192FE) )
    v2039238 += 7;
  else
    v2039238 = *(_BYTE *)(v2039238 + 3) | (*(_BYTE *)(v2039238 + 4) << 8) | (*(_BYTE *)(v2039238 + 5) << 16) | (*(_BYTE *)(v2039238 + 6) << 24);
  return v1;
}
