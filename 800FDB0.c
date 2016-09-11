int __fastcall sub_800FDB0(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
    *(_WORD *)(a1 + 32) = ((*(_WORD *)(a1 + 50) & 0xFF00u) >> 8) + *(_WORD *)(a1 + 48);
  else
    *(_WORD *)(a1 + 32) = *(_WORD *)(a1 + 48) - ((*(_WORD *)(a1 + 50) & 0xFF00) >> 8);
  *(_WORD *)(a1 + 50) += 384;
  if ( *(_BYTE *)(a1 + 63) & 0x20 )
  {
    FreeSpriteTilesByTag(0x2710u);
    FreeSpritePaletteByTag(0x2710u);
    FreeSpriteOamMatrix(v1);
    DestroySprite(v1);
  }
  return v3;
}
