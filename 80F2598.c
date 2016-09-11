int sub_80F2598()
{
  int v0; // r1@2
  int v2; // [sp+4h] [bp-4h]@0

  v2006D9C = 0;
  if ( sub_8082C0C(v2025738, v2025739) == 1 )
  {
    LoadSpriteSheet((int)"ØA>\b");
    LoadSpritePalette((int)&gSpritePalette_PokenavBlueLight);
    v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83E4484, 12, 96);
    if ( v0 == 64 )
    {
      FreeSpriteTilesByTag(0x19u);
      FreeSpritePaletteByTag(0x11u);
    }
    else
    {
      v2006D9C = &gSprites[68 * v0];
    }
  }
  return v2;
}
