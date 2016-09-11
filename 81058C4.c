int sub_81058C4()
{
  unsigned int v0; // r4@1
  int v1; // r0@2
  char *v2; // r3@2
  int v4; // [sp+0h] [bp-18h]@1
  int v5; // [sp+14h] [bp-4h]@3

  memcpy(&v4, (const char *)&gUnknown_083ECC5A, 8);
  v0 = 0;
  do
  {
    v1 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED54C, 80 - gSpriteCoordOffsetX, 68);
    v2 = &gSprites[68 * v1];
    v2[5] = v2[5] & 0xF3 | 4;
    v2[62] |= 2u;
    *((_WORD *)v2 + 23) = *((_WORD *)&v4 + v0);
    *(_BYTE *)(v0 + 33554516) = v1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v5;
}
