int sub_81056C0()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v0 + 33554512)]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 1 );
  return v2;
}
