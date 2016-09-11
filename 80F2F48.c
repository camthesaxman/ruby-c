int sub_80F2F48()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2008768 )
  {
    DestroySprite(v2008768);
    FreeSpriteTilesByTag(6u);
    FreeSpritePaletteByTag(6u);
    v2008768 = 0;
  }
  return v1;
}
