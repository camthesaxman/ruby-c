int __fastcall UpdateTilemap(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  unsigned int v4; // r6@1
  int v5; // r7@3
  __int16 v6; // r4@3
  __int16 v7; // r0@3
  __int16 v8; // r4@4
  __int16 v9; // r0@4
  int v11; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetCursorTilemapPointer(a1);
  if ( v3 )
  {
    if ( v4 )
    {
      v5 = (*(_BYTE *)(v2 + 6) << 12) & 0xFFFF;
      v6 = GetCursorTileNum(v2, 0, 0);
      v7 = GetCursorTileNum(v2, 0, 1);
      *(_WORD *)v4 = v6 | v5;
      *(_WORD *)(v4 + 64) = v7 | v5;
      if ( v3 == 2 )
      {
        v8 = GetCursorTileNum(v2, 1, 0);
        v9 = GetCursorTileNum(v2, 1, 1);
        *(_WORD *)(v4 + 2) = v8 | v5;
        *(_WORD *)(v4 + 66) = v9 | v5;
      }
    }
  }
  return v11;
}
