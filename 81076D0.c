int sub_81076D0()
{
  _BYTE *v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (_BYTE *)33704967;
  else
    v0 = (_BYTE *)33704968;
  if ( (unsigned int)(100 * *(_WORD *)(88 * *v0 + 0x2024AA8) / *(_WORD *)(88 * *v0 + 0x2024AAC)) <= *(_BYTE *)(v2039238 + 2) )
    v2039238 += 7;
  else
    v2039238 = *(_BYTE *)(v2039238 + 3) | (*(_BYTE *)(v2039238 + 4) << 8) | (*(_BYTE *)(v2039238 + 5) << 16) | (*(_BYTE *)(v2039238 + 6) << 24);
  return v2;
}
