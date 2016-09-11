int sub_8104EA8()
{
  unsigned int v0; // r6@1
  unsigned int v1; // r0@1
  unsigned int v2; // r4@2
  unsigned int v3; // r5@2
  unsigned int v4; // r7@2
  char *v5; // r1@3
  int v6; // r0@3
  int v8; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 48;
  do
  {
    v2 = 0;
    v3 = v1 << 16;
    v4 = v0 << 16;
    do
    {
      v5 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED414, SHIWORD(v3), 0)];
      v5[5] |= 0xCu;
      *((_WORD *)v5 + 23) = v0;
      *((_WORD *)v5 + 24) = v2;
      *((_WORD *)v5 + 26) = -1;
      v6 = (v2 << 16) + 1572864;
      v2 = (unsigned int)v6 >> 16;
    }
    while ( v6 >> 16 <= 119 );
    v1 = (v3 + 2621440) >> 16;
    v0 = (v4 + 0x10000) >> 16;
  }
  while ( (signed int)(v4 + 0x10000) >> 16 <= 2 );
  return v8;
}
