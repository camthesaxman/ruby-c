int sub_81184D8()
{
  char *v0; // r1@1
  int v2; // [sp+0h] [bp-14h]@1
  int v3; // [sp+4h] [bp-10h]@1
  int v4; // [sp+10h] [bp-4h]@1

  LZ77UnCompWram(149430592, 0x2000000);
  v2 = 0x2000000;
  v3 = 395264;
  LoadSpriteSheet((int)&v2);
  v0 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83FA434, 116, 80)];
  *((_WORD *)v0 + 23) = v2019024;
  *((_WORD *)v0 + 24) = 0;
  v0[44] |= 0xC0u;
  v0[62] |= 2u;
  return v4;
}
