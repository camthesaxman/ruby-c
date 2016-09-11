int sub_8105804()
{
  signed int v0; // r0@1
  unsigned int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = IndexOfSpritePaletteTag(7u);
  sub_8085C7C((((v0 << 20) & 0xFFFFFFFu) + 16973824) >> 16, 0, 0, 0);
  v1 = 0;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v1 + 33554514)]);
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 1 );
  return v3;
}
