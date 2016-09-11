int sub_81054B8()
{
  unsigned int v0; // r5@1
  unsigned int v1; // r5@3
  int v3; // [sp+8h] [bp-4h]@0

  DestroySprite((int)&gSprites[68 * v2000040]);
  v0 = 0;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v0 + 33554505)]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 1 );
  v1 = 0;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v1 + 33554507)]);
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 2 );
  return v3;
}
