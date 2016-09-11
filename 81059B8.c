int sub_81059B8()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v0 + 33554516)]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v2;
}
