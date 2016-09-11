int sub_81059E8()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r4@1
  char *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83ED564, 168, 60);
  v1 = v0;
  v2 = &gSprites[68 * v0];
  v2[5] = v2[5] & 0xF3 | 4;
  v2[1] |= 3u;
  InitSpriteAffineAnim((int)v2);
  v2000043 = v1;
  return v4;
}
