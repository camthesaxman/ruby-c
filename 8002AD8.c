int __fastcall InitVariableWidthFontTileData(int a1, __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+0h] [bp-10h]@1

  v2 = a1;
  *(_WORD *)(a1 + 26) = a2;
  *(_WORD *)(a1 + 28) = 2;
  v3 = *(_DWORD *)(a1 + 36) + 32 * *(_WORD *)(a1 + 26);
  v5 = 0;
  CpuFastSet(&v5, v3, 16777224);
  ApplyColors_UnshadowedFont(
    &sBlankTile,
    v3 + 32,
    *(_BYTE *)(*(_DWORD *)(v2 + 44) + 5),
    *(_BYTE *)(*(_DWORD *)(v2 + 44) + 6));
  return (*(_WORD *)(v2 + 28) + *(_WORD *)(v2 + 26) + *(_BYTE *)(v2 + 10) * *(_BYTE *)(v2 + 9)) & 0xFFFF;
}
