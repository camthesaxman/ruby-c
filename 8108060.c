int sub_8108060()
{
  signed int v0; // r3@1
  _WORD *v1; // r2@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v1 = (_WORD *)(88 * v2024C07 + 33704588);
  do
  {
    if ( *v1 && gBattleMoves[12 * *v1 + 1] )
      break;
    ++v1;
    ++v0;
  }
  while ( v0 <= 3 );
  if ( v0 == 4 )
    v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24);
  else
    v2039238 += 5;
  return v3;
}
