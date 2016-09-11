int atk9D_copyattack()
{
  int v0; // r1@3
  signed int v1; // r2@6
  unsigned int v2; // r4@10
  unsigned int v3; // r4@13
  int v5; // [sp+1Ch] [bp-4h]@0

  v2024BE8 = -1;
  if ( sub_8027694(*(_WORD *)(2 * v2024C08 + 0x2024C34)) << 24
    || *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x200000
    || (v0 = *(_WORD *)(2 * v2024C08 + 0x2024C34)) == 0
    || v0 == 0xFFFF )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v1 = 0;
    if ( *(_WORD *)(88 * v2024C07 + 0x2024A8C) != v0 )
    {
      do
        ++v1;
      while ( v1 <= 3 && *(_WORD *)(2 * v1 + 88 * v2024C07 + 0x2024A8C) != *(_WORD *)(2 * v2024C08 + 0x2024C34) );
    }
    if ( v1 == 4 )
    {
      *(_WORD *)(2 * v2024BE4 + 88 * v2024C07 + 0x2024A8C) = *(_WORD *)(2 * v2024C08 + 0x2024C34);
      v2 = gBattleMoves[12 * *(_WORD *)(2 * v2024C08 + 0x2024C34) + 4];
      if ( v2 > 4 )
        *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) = 5;
      else
        *(_BYTE *)(88 * v2024C07 + v2024BE4 + 0x2024AA4) = v2;
      byte_30041C0[0] = -3;
      byte_30041C1 = 2;
      word_30041C2 = *(_WORD *)(2 * v2024C08 + 0x2024C34);
      byte_30041C4 = -1;
      v3 = *(_BYTE *)(28 * v2024C07 + 0x2024CC0);
      *(_BYTE *)(28 * v2024C07 + 0x2024CC0) = v3 & 0xF | 16 * (LOBYTE(gBitTable[v2024BE4]) | (v3 >> 4));
      v2024C10 += 5;
    }
    else
    {
      v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
    }
  }
  return v5;
}
