int __fastcall DrawDownArrow(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r1@2
  char *v3; // r7@2
  signed int v4; // r0@2
  int v5; // r6@8
  int v6; // r4@11
  int v7; // r0@12
  char v9; // [sp+4h] [bp-2Ch]@12
  char v10; // [sp+5h] [bp-2Bh]@12
  char v11; // [sp+6h] [bp-2Ah]@13
  char *v12; // [sp+8h] [bp-28h]@13
  int v13; // [sp+Ch] [bp-24h]@13
  int *v14; // [sp+10h] [bp-20h]@13
  char *v15; // [sp+14h] [bp-1Ch]@13
  char *v16; // [sp+18h] [bp-18h]@13
  int v17; // [sp+2Ch] [bp-4h]@17

  v1 = a1;
  if ( PlayerCanInterruptWait() << 24 )
  {
    v2 = (*(_WORD *)(v1 + 24) & 0xF00u) >> 2;
    v3 = (char *)&sDownArrowTiles + v2;
    v4 = *(_BYTE *)v1;
    if ( v4 == 1 )
    {
      v5 = (*(_WORD *)(v1 + 26) + 254) & 0xFFFF;
      if ( !*(_BYTE *)(v1 + 1) || *(_BYTE *)(v1 + 1) == 3 )
        v5 = 2 * v5 & 0xFFFF;
      v6 = *(_DWORD *)(v1 + 36) + 32 * v5;
      ApplyColors_ShadowedFont(
        (unsigned int *)((char *)&sDownArrowTiles + v2),
        (int *)v6,
        *(_BYTE *)(v1 + 3),
        *(_BYTE *)(v1 + 5),
        *(_BYTE *)(v1 + 4));
      ApplyColors_ShadowedFont(
        (unsigned int *)v3 + 8,
        (int *)(v6 + 32),
        *(_BYTE *)(v1 + 3),
        *(_BYTE *)(v1 + 5),
        *(_BYTE *)(v1 + 4));
      WriteGlyphTilemap(v1, v5, v5 + 1);
    }
    else
    {
      if ( v4 > 1 )
      {
        if ( v4 != 2 )
          return v17;
      }
      else if ( *(_BYTE *)v1 )
      {
        return v17;
      }
      v9 = *(_BYTE *)v1;
      v7 = (*(_BYTE *)(v1 + 16) + *(_BYTE *)(v1 + 18)) & 7;
      v10 = (*(_BYTE *)(v1 + 16) + *(_BYTE *)(v1 + 18)) & 7;
      if ( v7 )
      {
        GetGlyphTilePointers(*(_BYTE *)(v1 + 1), *(_BYTE *)(v1 + 2), 0, (int *)&v15, &v16);
        v11 = 8 - v10;
        v12 = v15;
        v13 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 1, 0) & 0x1FFFFF);
        v14 = &dword_30003A4;
        DrawGlyphTile_ShadowedFont(&v9);
        v12 = v16;
        v13 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 1, 1) & 0x1FFFFF);
        DrawGlyphTile_ShadowedFont(&v9);
      }
      v11 = 8;
      v12 = v3;
      v13 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 0, 0) & 0x1FFFFF);
      v14 = &dword_30003A4;
      DrawGlyphTile_ShadowedFont(&v9);
      v12 += 32;
      v13 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 0, 1) & 0x1FFFFF);
      DrawGlyphTile_ShadowedFont(&v9);
      if ( v10 )
        UpdateTilemap(v1, 2);
      else
        UpdateTilemap(v1, 1);
    }
  }
  return v17;
}
