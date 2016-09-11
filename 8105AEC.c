int sub_8105AEC()
{
  char *v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = &gSprites[68 * v2000043];
  FreeOamMatrix((unsigned int)(unsigned __int8)v0[3] << 26 >> 27);
  DestroySprite((int)v0);
  return v2;
}
