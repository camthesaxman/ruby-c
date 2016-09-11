int __fastcall sub_8105B88(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  FreeOamMatrix((unsigned int)(unsigned __int8)v1[3] << 26 >> 27);
  DestroySprite((int)v1);
  return v3;
}
