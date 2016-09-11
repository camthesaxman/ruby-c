int sub_80225F0()
{
  int v0; // r3@2
  unsigned int v1; // r2@2
  signed int v2; // r2@7
  int v4; // [sp+0h] [bp-6Ch]@2
  char v5[56]; // [sp+18h] [bp-54h]@8
  int v6; // [sp+50h] [bp-1Ch]@9
  int v7; // [sp+68h] [bp-4h]@11

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    memcpy(&v4, 88 * v2024A60 + 33704576, 88);
    v0 = 88 * v2024A60 + 33704576;
    v1 = 0;
    do
    {
      *(_BYTE *)(v0 + v1) = *(_BYTE *)(v1 + (v2024A60 << 9) + 4 + 33702496);
      ++v1;
    }
    while ( v1 <= 0x57 );
    *(_BYTE *)(88 * v2024A60 + 0x2024AA1) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80) + 6);
    *(_BYTE *)(88 * v2024A60 + 0x2024AA2) = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024A60 + 0x2024A80) + 7);
    *(_BYTE *)(88 * v2024A60 + 0x2024AA0) = sub_803DB14(
                                              *(_WORD *)(88 * v2024A60 + 0x2024A80),
                                              (unsigned int)*(_BYTE *)(88 * v2024A60 + 0x2024A97) >> 7);
    if ( *(_BYTE *)((unsigned __int8)battle_side_get_owner(v2024A60) + 0x2024DE5) & gBitTable[*(_WORD *)(2 * v2024A60 + 0x2024A6A)] )
      *(_WORD *)(88 * v2024A60 + 0x2024AAE) = 0;
    if ( gBattleMoves[12 * v2024BE6] == 127 )
    {
      v2 = 0;
      do
      {
        *(_BYTE *)(v2 + 88 * v2024A60 + 33704600) = v5[v2];
        ++v2;
      }
      while ( v2 <= 7 );
      *(_DWORD *)(88 * v2024A60 + 0x2024AD0) = v6;
    }
    sub_8010B88();
    v2016003 = v2024A60;
    byte_30041C0[0] = -3;
    byte_30041C1 = 7;
    LOBYTE(word_30041C2) = v2024A60;
    HIBYTE(word_30041C2) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
    byte_30041C4 = -1;
    v2024C10 += 2;
  }
  return v7;
}
