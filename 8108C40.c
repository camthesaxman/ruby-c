int sub_8108C40()
{
  _BYTE *v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (_BYTE *)33704967;
  else
    v0 = (_BYTE *)33704968;
  if ( *(_BYTE *)(88 * *v0 + *(_BYTE *)(v2039238 + 2) + 0x2024A98) <= (signed int)*(_BYTE *)(v2039238 + 3) )
    v2039238 += 8;
  else
    v2039238 = *(_BYTE *)(v2039238 + 4) | (*(_BYTE *)(v2039238 + 5) << 8) | (*(_BYTE *)(v2039238 + 6) << 16) | (*(_BYTE *)(v2039238 + 7) << 24);
  return v2;
}
