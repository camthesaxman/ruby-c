int __fastcall sub_8105B1C(__int16 a1, __int16 a2)
{
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  char *v4; // r0@1

  v2 = CreateSprite((int)&gSpriteTemplate_83ED6CC, a1, a2);
  v3 = v2;
  v4 = &gSprites[68 * v2];
  v4[5] = v4[5] & 0xF3 | 8;
  v4[1] |= 3u;
  InitSpriteAffineAnim((int)v4);
  return v3;
}
