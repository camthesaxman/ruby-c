int sub_80E8268()
{
  unsigned __int8 v0; // r0@1
  char *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83DBBFC, 0, 0);
  v1 = &gSprites[68 * v0];
  *((_WORD *)v1 + 17) = 8 * v200108A + 8;
  *((_WORD *)v1 + 16) = 8 * v2001088 + 4;
  *((_WORD *)v1 + 23) = 0;
  *((_WORD *)v1 + 24) = 0;
  v2001098 = &gSprites[68 * v0];
  return v3;
}
