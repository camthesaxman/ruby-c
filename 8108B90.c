int sub_8108B90()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( gBattleMoves[12 * v2016802] == *(_BYTE *)(v2039238 + 1) )
    v2039238 += 6;
  else
    v2039238 = *(_BYTE *)(v2039238 + 2) | (*(_BYTE *)(v2039238 + 3) << 8) | (*(_BYTE *)(v2039238 + 4) << 16) | (*(_BYTE *)(v2039238 + 5) << 24);
  return v1;
}
