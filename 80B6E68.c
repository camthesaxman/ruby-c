int sub_80B6E68()
{
  unsigned __int8 v0; // r0@1
  char *v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = sub_805983C(0, v200003E);
  v1 = &gSprites[68 * (unsigned __int8)AddPseudoFieldObject(v0, (int)SpriteCallbackDummy, 56, 24)];
  v1[5] |= 0xCu;
  StartSpriteAnim((int)v1, 4);
  return v3;
}
