int sub_81091D4()
{
  signed int v0; // r0@1
  signed int v1; // r3@7
  _WORD *v2; // r2@7
  signed int v3; // r3@13
  _WORD *v4; // r2@13
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = *(_BYTE *)(v2039238 + 1);
  if ( v0 == 1 )
    goto LABEL_21;
  if ( v0 <= 1 )
  {
    if ( *(_BYTE *)(v2039238 + 1) )
      return v6;
    goto _0810925C;
  }
  if ( v0 == 2 )
  {
_0810925C:
    v3 = 0;
    v4 = (_WORD *)(16 * ((unsigned int)v2024C08 >> 1) + 33647104);
    do
    {
      if ( *v4 && gBattleMoves[12 * *v4] == *(_BYTE *)(v2039238 + 2) )
        break;
      ++v4;
      ++v3;
    }
    while ( v3 <= 7 );
_0810928E:
    v2039238 += 7;
    return v6;
  }
  if ( v0 == 3 )
  {
LABEL_21:
    v1 = 0;
    v2 = (_WORD *)(88 * v2024C07 + 33704588);
    do
    {
      if ( *v2 && gBattleMoves[12 * *v2] == *(_BYTE *)(v2039238 + 2) )
        break;
      ++v2;
      ++v1;
    }
    while ( v1 <= 3 );
    if ( v1 != 4 )
      goto _0810928E;
    v2039238 = *(_BYTE *)(v2039238 + 3) | (*(_BYTE *)(v2039238 + 4) << 8) | (*(_BYTE *)(v2039238 + 5) << 16) | (*(_BYTE *)(v2039238 + 6) << 24);
  }
  return v6;
}
