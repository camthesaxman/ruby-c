int sub_8105284()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r4@1
  char *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83ED4A4, 168 - gSpriteCoordOffsetX, 80);
  v1 = v0;
  v2 = &gSprites[68 * v0];
  v2[5] = v2[5] & 0xF3 | 4;
  v2[62] |= 2u;
  SetSubspriteTables((int)v2, (int)&gUnknown_083ED78C);
  v2000042 = v1;
  return v4;
}
