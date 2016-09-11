int __fastcall ClipRight(int a1)
{
  int v1; // r6@1
  int v2; // r2@1
  int v3; // r5@3
  int v4; // r4@3
  int v5; // r1@3
  int v6; // r1@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (*(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 18)) & 7;
  if ( *(_BYTE *)a1 != 1 && v2 )
  {
    v3 = *(&sGlyphMasks[24 * (8 - v2)] + 3 * v2);
    v4 = dword_30003A0 & ~v3;
    v5 = *(_DWORD *)(a1 + 36) + (32 * GetCursorTileNum(a1, 0, 0) & 0x1FFFFF);
    *(_DWORD *)v5 = *(_DWORD *)v5 & v3 | v4;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v5 + 4) & v3 | v4;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v5 + 8) & v3 | v4;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v5 + 12) & v3 | v4;
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & v3 | v4;
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v5 + 20) & v3 | v4;
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 24) & v3 | v4;
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(v5 + 28) & v3 | v4;
    v6 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 0, 1) & 0x1FFFFF);
    *(_DWORD *)v6 = *(_DWORD *)v6 & v3 | v4;
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v6 + 4) & v3 | v4;
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 8) & v3 | v4;
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v6 + 12) & v3 | v4;
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v6 + 16) & v3 | v4;
    *(_DWORD *)(v6 + 20) = *(_DWORD *)(v6 + 20) & v3 | v4;
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 24) & v3 | v4;
    *(_DWORD *)(v6 + 28) = *(_DWORD *)(v6 + 28) & v3 | v4;
    UpdateTilemap(v1, 1);
  }
  return v8;
}
