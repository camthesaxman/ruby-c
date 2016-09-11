int sub_80B6D04()
{
  unsigned __int8 v0; // r0@1
  int v1; // r1@1
  unsigned int i; // r5@1
  int v3; // r4@2
  char *v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83CE658, 8 * (v2000002 - 1) + 4, 40);
  gSprites[68 * v0 + 5] |= 0xCu;
  v1 = (8 * v2000002 + 4) & 0xFFFF;
  for ( i = 0; i < *(_BYTE *)(v2000034 + 1); v1 = (v3 + 8) & 0xFFFF )
  {
    v3 = (signed __int16)v1;
    v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CE670, v1, 44)];
    v4[5] |= 0xCu;
    *((_WORD *)v4 + 23) = i;
    i = (i + 1) & 0xFF;
  }
  return v6;
}
