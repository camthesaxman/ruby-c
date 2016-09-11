int sub_80F2620()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2006D9C )
  {
    DestroySprite(v2006D9C);
    FreeSpriteTilesByTag(0x19u);
    FreeSpritePaletteByTag(0x11u);
    v2006D9C = 0;
  }
  return v1;
}
