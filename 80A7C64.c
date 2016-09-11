int sub_80A7C64()
{
  int v1; // [sp+8h] [bp-4h]@0

  FreeSpritePaletteByTag(8u);
  FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * v2038568 + 3] << 26 >> 27);
  DestroySprite((int)&gSprites[68 * v2038568]);
  return v1;
}
