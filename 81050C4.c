int sub_81050C4()
{
  char *v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED444, 88, 72)];
  v0[5] |= 0xCu;
  SetSubspriteTables((int)v0, (int)&gUnknown_083ED704);
  return v2;
}
