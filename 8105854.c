int sub_8105854()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED534, 168, 80);
  gSprites[68 * v0 + 5] = gSprites[68 * v0 + 5] & 0xF3 | 4;
  v2000041 = v0;
  return v2;
}
