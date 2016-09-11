int __fastcall DrawSpace(int a1)
{
  int v1; // r5@1
  int v2; // r4@5
  int v3; // r1@5
  int v4; // r1@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)a1 == 1 || (*(_BYTE *)(a1 + 18) + *(_BYTE *)(a1 + 16)) & 7 || (unsigned int)*(_BYTE *)(a1 + 14) <= 7 )
  {
    call_via_r2(a1, 0, *(&sPrintGlyphFuncs + *(_BYTE *)a1));
  }
  else
  {
    v2 = dword_30003A0;
    v3 = *(_DWORD *)(a1 + 36) + (32 * GetCursorTileNum(a1, 0, 0) & 0x1FFFFF);
    *(_DWORD *)v3 = v2;
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v3 + 8) = v2;
    *(_DWORD *)(v3 + 12) = v2;
    *(_DWORD *)(v3 + 16) = v2;
    *(_DWORD *)(v3 + 20) = v2;
    *(_DWORD *)(v3 + 24) = v2;
    *(_DWORD *)(v3 + 28) = v2;
    v4 = *(_DWORD *)(v1 + 36) + (32 * GetCursorTileNum(v1, 0, 1) & 0x1FFFFF);
    *(_DWORD *)v4 = v2;
    *(_DWORD *)(v4 + 4) = v2;
    *(_DWORD *)(v4 + 8) = v2;
    *(_DWORD *)(v4 + 12) = v2;
    *(_DWORD *)(v4 + 16) = v2;
    *(_DWORD *)(v4 + 20) = v2;
    *(_DWORD *)(v4 + 24) = v2;
    *(_DWORD *)(v4 + 28) = v2;
    UpdateTilemap(v1, 1);
    AddToCursorX(v1, 8);
  }
  return v6;
}
