int __fastcall SetSpriteSheetFrameTileNum(int a1)
{
  __int16 v1; // r2@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( *(_BYTE *)(a1 + 63) & 0x40 )
  {
    v1 = *(_WORD *)(4 * *(_BYTE *)(a1 + 43) + *(_DWORD *)(4 * *(_BYTE *)(a1 + 42) + *(_DWORD *)(a1 + 8)));
    if ( v1 < 0 )
      v1 = 0;
    *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | (*(_WORD *)(a1 + 64) + v1) & 0x3FF;
  }
  return v3;
}
