int sub_8097FB8()
{
  unsigned int v0; // r4@1
  int v2; // [sp+0h] [bp-14h]@1
  int v3; // [sp+4h] [bp-10h]@1
  int v4; // [sp+10h] [bp-4h]@3

  v2 = 138111924;
  v3 = 328128;
  LoadSpriteSheet((int)&v2);
  v0 = 0;
  do
  {
    *(_DWORD *)(4 * v0 + 0x20012B0) = &gSprites[68
                                              * (unsigned __int8)CreateSprite(
                                                                   (int)&gSpriteTemplate_83B6EFC,
                                                                   63 * v0 + 8,
                                                                   9)];
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  return v4;
}
