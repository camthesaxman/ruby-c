int sub_81052EC()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r5@1
  int v2; // r0@2
  char *v3; // r3@2
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED4BC, 368, 0);
    v3 = &gSprites[68 * v2];
    v3[5] = v3[5] & 0xF3 | 4;
    v3[62] |= 2u;
    *((_WORD *)v3 + 30) = v1;
    *(_BYTE *)(v0 + 33554507) = v2;
    v0 = (v0 + 1) & 0xFF;
    v1 = ((v1 << 16) + 1310720) >> 16;
  }
  while ( v0 <= 2 );
  return v5;
}
