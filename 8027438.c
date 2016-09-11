int atk9B_transformdataexecution()
{
  char v0; // r0@3
  int v1; // r5@4
  int v2; // r2@4
  unsigned int v3; // r4@4
  signed int v4; // r4@6
  int v5; // r2@7
  unsigned int v6; // r1@7
  _BYTE *v7; // r0@8
  int v9; // [sp+14h] [bp-4h]@0

  v2024BE8 = -1;
  ++v2024C10;
  if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x200000 || *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0 )
  {
    v2024C68 |= 0x20u;
    v0 = 1;
  }
  else
  {
    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= 0x200000u;
    *(_WORD *)(28 * v2024C07 + 0x2024CAC) = 0;
    *(_BYTE *)(28 * v2024C07 + 0x2024CB3) &= 0xF0u;
    *(_DWORD *)(28 * v2024C07 + 0x2024CA8) = *(_DWORD *)(88 * v2024C08 + 0x2024AC8);
    *(_BYTE *)(28 * v2024C07 + 0x2024CC0) &= 0xFu;
    byte_30041C0[0] = -3;
    byte_30041C1 = 6;
    word_30041C2 = *(_WORD *)(88 * v2024C08 + 0x2024A80);
    byte_30041C4 = -1;
    v1 = 88 * v2024C07 + 33704576;
    v2 = 88 * v2024C08 + 33704576;
    v3 = 0;
    do
    {
      *(_BYTE *)(v1 + v3) = *(_BYTE *)(v2 + v3);
      ++v3;
    }
    while ( v3 <= 0x23 );
    v4 = 0;
    do
    {
      v5 = 88 * v2024C07;
      v6 = gBattleMoves[12 * *(_WORD *)(2 * v4 + 88 * v2024C07 + 0x2024A8C) + 4];
      if ( v6 > 4 )
      {
        v7 = (_BYTE *)(v4 + v5 + 33704612);
        LOBYTE(v6) = 5;
      }
      else
      {
        v7 = (_BYTE *)(v4 + v5 + 33704612);
      }
      *v7 = v6;
      ++v4;
    }
    while ( v4 <= 3 );
    v2024A60 = v2024C07;
    dp01_build_cmdbuf_x38_a(0, 2);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v0 = 0;
  }
  v2024D23 = v0;
  return v9;
}
