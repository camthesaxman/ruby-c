int sub_8109330()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2039238 + 1) )
  {
    if ( *(_BYTE *)(v2039238 + 1) == 1 && *(_WORD *)(28 * v2024A60 + 0x2024CAE) == v2016802 )
      goto _08109388;
_081093AC:
    v2039238 += 6;
    return v1;
  }
  if ( *(_WORD *)(28 * v2024A60 + 0x2024CAC) != v2016802 )
    goto _081093AC;
_08109388:
  v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
