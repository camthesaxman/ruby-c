int __fastcall get_berry_tree_graphics(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  _BYTE *v4; // r4@1
  int v5; // r6@1
  unsigned int v6; // r4@2
  int v7; // r6@2
  unsigned int v8; // r4@4
  int v10; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 1) |= 0x20u;
  v4 = (_BYTE *)(a2 + 62);
  *(_BYTE *)(a2 + 62) |= 4u;
  v5 = GetStageByBerryTreeId(*(_BYTE *)(a1 + 29)) & 0xFF;
  if ( v5 )
  {
    *(_BYTE *)(v2 + 1) &= 0xDFu;
    *v4 &= 0xFBu;
    v6 = (GetBerryTypeByBerryTreeId(*(_BYTE *)(v2 + 29)) - 1) & 0xFF;
    v7 = (v5 - 1) & 0xFF;
    if ( v6 > 0x2B )
      v6 = 0;
    v8 = v6;
    sub_805B980(v2, gBerryTreeGraphicsIdTablePointers[v8][v7]);
    *(_DWORD *)(v3 + 12) = gBerryTreePicTablePointers[v8];
    *(_BYTE *)(v3 + 5) = *(_BYTE *)(v3 + 5) & 0xF | 16
                                                  * (*(_BYTE **)((char *)&gBerryTreePaletteSlotTablePointers + v8 * 4))[v7];
    StartSpriteAnim(v3, v7);
  }
  return v10;
}
