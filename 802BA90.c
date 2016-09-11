int sub_802BA90()
{
  signed int v0; // r0@8
  signed int v1; // r2@8
  signed int v2; // r3@8
  unsigned __int16 v3; // r0@10
  int v5; // [sp+14h] [bp-4h]@0

  if ( v2024D1E == 1 )
  {
    if ( !(v202F38F & 0x80) )
    {
      v3 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024C08 + 0x2024A80));
      v2024D1F = sub_809070C(v3, *(_DWORD *)(88 * v2024C08 + 0x2024AD4), *(_DWORD *)(88 * v2024C08 + 0x2024AC8));
_0802BB72:
      ++v2024D1E;
      return v5;
    }
  }
  else
  {
    if ( (signed int)v2024D1E <= 1 )
    {
      if ( v2024D1E )
        return v5;
      v0 = -1;
      v1 = 0;
      v2 = 16;
      goto _0802BB6E;
    }
    if ( v2024D1E == 2 )
    {
      if ( !(v202F38F & 0x80) && (int (*)())dword_3001774 == sub_800F808 && !LOBYTE(dword_3004B20[10 * v2024D1F + 1]) )
      {
        LZDecompressVram((int)&gBattleTerrainTiles_Building, 100696064);
        LZDecompressVram((int)&gBattleTerrainTilemap_Building, 100716544);
        LoadCompressedPalette(&gBattleTerrainPalette_BattleTower, 32, 96);
        v400000E = 23051;
        word_30041B0 = 256;
        v0 = 65532;
        v1 = 16;
        v2 = 0;
_0802BB6E:
        BeginNormalPaletteFade(v0, 0, v1, v2);
        goto _0802BB72;
      }
    }
    else if ( v2024D1E == 3 && !(v202F38F & 0x80) )
    {
      ++v2024C10;
    }
  }
  return v5;
}
