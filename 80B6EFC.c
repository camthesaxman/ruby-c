int sub_80B6EFC()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  sub_809D51C();
  v0 = sub_809D2FC(v200003E, (int)SpriteCallbackDummy, 52, 24, 0, v2000044);
  gSprites[68 * v0 + 5] |= 0xCu;
  return v2;
}
