int __fastcall ClipLeft(int a1)
{
  int v1; // r6@1
  int v2; // r1@3
  int v3; // r5@3
  int v4; // r4@3
  int v5; // r1@3
  int v6; // r1@3
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)a1 != 1 && *(_BYTE *)(a1 + 18) & 7 )
  {
    v2 = dword_81E69DC[3 * (*(_BYTE *)(a1 + 18) & 7)];
    v3 = ~v2;
    v4 = dword_30003A0 & v2;
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
  }
  return v8;
}
