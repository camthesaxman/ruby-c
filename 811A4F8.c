int sub_811A4F8()
{
  unsigned __int16 v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = GetSpritePaletteTagByPaletteNum((unsigned int)(unsigned __int8)gSprites[68 * v201C804 + 5] >> 4);
  FreeSpritePaletteByTag(v0);
  DestroySprite((int)&gSprites[68 * v201C804]);
  return v2;
}
