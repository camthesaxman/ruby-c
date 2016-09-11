int sub_80F2FB0()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v200CED0 )
  {
    DestroySprite(v200CED0);
    FreeSpriteTilesByTag(6u);
    FreeSpritePaletteByTag(6u);
    v200CED0 = 0;
    v2008768 = 0;
  }
  return v1;
}
