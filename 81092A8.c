int tai43_unk()
{
  _BYTE *v0; // r0@2
  int v1; // r3@4
  int v3; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) == 1 )
    v0 = (_BYTE *)33704967;
  else
    v0 = (_BYTE *)33704968;
  v1 = *v0;
  if ( *(_BYTE *)(v2039238 + 2) )
  {
    if ( *(_BYTE *)(v2039238 + 2) == 1 )
    {
      if ( !*(_WORD *)(28 * v1 + 0x2024CAE) )
      {
        v2039238 += 7;
        return v3;
      }
      goto _08109306;
    }
  }
  else if ( *(_WORD *)(28 * v1 + 0x2024CAC) )
  {
_08109306:
    v2039238 = *(_BYTE *)(v2039238 + 3) | (*(_BYTE *)(v2039238 + 4) << 8) | (*(_BYTE *)(v2039238 + 5) << 16) | (*(_BYTE *)(v2039238 + 6) << 24);
    return v3;
  }
  v2039238 += 7;
  return v3;
}
