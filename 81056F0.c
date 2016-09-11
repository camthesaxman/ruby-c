int sub_81056F0()
{
  int v0; // r0@1
  char *v1; // r2@1
  int v2; // r0@1
  char *v3; // r1@1
  int v5; // [sp+14h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED51C, 72, 80);
  v1 = &gSprites[68 * v0];
  v1[5] = v1[5] & 0xF3 | 4;
  *((_WORD *)v1 + 23) = 1;
  *((_WORD *)v1 + 28) = 0;
  *((_WORD *)v1 + 29) = 16;
  *((_WORD *)v1 + 30) = 8;
  v2000052 = v0;
  v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED51C, 104, 80);
  v3 = &gSprites[68 * v2];
  v3[5] = v3[5] & 0xF3 | 4;
  v3[63] |= 1u;
  v2000053 = v2;
  return v5;
}
