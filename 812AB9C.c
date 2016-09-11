int sub_812AB9C()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)Random() >= (signed int)*(_WORD *)(2 * *(_BYTE *)(v2039238 + 1) + 0x20192FE) )
    v2039238 += 6;
  else
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
