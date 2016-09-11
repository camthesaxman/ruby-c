int tai40_unk()
{
  _WORD *v0; // r6@1
  signed int v1; // r0@1
  signed int v2; // r3@7
  int v3; // r1@7
  signed int v4; // r3@12
  int v5; // r2@12
  int v7; // [sp+10h] [bp-4h]@0

  v0 = (_WORD *)(v2039238 + 2);
  v1 = *(_BYTE *)(v2039238 + 1);
  if ( v1 == 1 )
    goto LABEL_21;
  if ( v1 <= 1 )
  {
    if ( *(_BYTE *)(v2039238 + 1) )
      return v7;
_08108FA8:
    v4 = 0;
    v5 = *v0;
    if ( *(_WORD *)(16 * ((unsigned int)v2024C08 >> 1) + 0x2016A00) != v5 )
    {
      do
        ++v4;
      while ( v4 <= 7 && *(_WORD *)(2 * v4 + 16 * ((unsigned int)v2024C08 >> 1) + 0x2016A00) != v5 );
    }
    if ( v4 == 8 )
    {
_08108FDE:
      v2039238 += 8;
      return v7;
    }
_08108FF0:
    v2039238 = *(_BYTE *)(v2039238 + 4) | (*(_BYTE *)(v2039238 + 5) << 8) | (*(_BYTE *)(v2039238 + 6) << 16) | (*(_BYTE *)(v2039238 + 7) << 24);
    return v7;
  }
  if ( v1 == 2 )
    goto _08108FA8;
  if ( v1 == 3 )
  {
LABEL_21:
    v2 = 0;
    v3 = *v0;
    if ( *(_WORD *)(88 * v2024C07 + 0x2024A8C) != v3 )
    {
      do
        ++v2;
      while ( v2 <= 3 && *(_WORD *)(2 * v2 + 88 * v2024C07 + 0x2024A8C) != v3 );
    }
    if ( v2 == 4 )
      goto _08108FDE;
    goto _08108FF0;
  }
  return v7;
}
