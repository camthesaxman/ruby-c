int atkE8_settypebasedhalvers()
{
  signed int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  if ( gBattleMoves[12 * v2024BE6] == 201 )
  {
    if ( !(*(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x10000) )
    {
      *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x10000u;
      v2024D23 = 0;
      goto _0802B180;
    }
  }
  else if ( !(*(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x20000) )
  {
    *(_DWORD *)(4 * v2024C07 + 0x2024C98) |= 0x20000u;
    v2024D23 = 1;
    v0 = 1;
  }
  if ( !v0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
    return v2;
  }
_0802B180:
  v2024C10 += 5;
  return v2;
}
