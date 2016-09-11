int sub_8105578()
{
  int v0; // r0@1
  char *v1; // r3@1
  int v2; // r0@1
  char *v3; // r3@1
  int v5; // [sp+18h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED504, 152, 32);
  v1 = &gSprites[68 * v0];
  v1[5] = v1[5] & 0xF3 | (unsigned int)gSprites;
  v1[63] |= 1u;
  v2000050 = v0;
  *((_WORD *)v1 + 23) = 8;
  *((_WORD *)v1 + 24) = -1;
  *((_WORD *)v1 + 25) = -1;
  *((_WORD *)v1 + 30) = 32;
  v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED504, 184, 32);
  v3 = &gSprites[68 * v2];
  v3[5] = v3[5] & 0xF3 | 4;
  v2000051 = v2;
  *((_WORD *)v3 + 24) = 1;
  *((_WORD *)v3 + 25) = -1;
  *((_WORD *)v3 + 30) = 32;
  return v5;
}
