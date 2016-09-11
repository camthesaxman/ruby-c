int sub_805AAB0()
{
  char *v0; // r4@1
  char *v1; // r4@1
  int v3; // [sp+18h] [bp-4h]@0

  v0 = &gSprites[68 * (unsigned __int8)CreateSpriteAtEnd(137842160, 0, 0)];
  v0[1] = v0[1] & 0xFC | 1;
  InitSpriteAffineAnim((int)v0);
  StartSpriteAffineAnim((int)v0, 0);
  v0[62] |= 4u;
  v1 = &gSprites[68 * (unsigned __int8)CreateSpriteAtEnd(137842160, 0, 0)];
  v1[1] = v1[1] & 0xFC | 1;
  InitSpriteAffineAnim((int)v1);
  StartSpriteAffineAnim((int)v1, 1);
  v1[62] |= 4u;
  return v3;
}
