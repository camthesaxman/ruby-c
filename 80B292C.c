int sub_80B292C()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v2024BE3 = object_new_hidden_with_callback((int)SpriteCallbackDummy);
  v0 = InitSpriteAffineAnim((int)&gSprites[68 * *(_BYTE *)(v2024C08 + 0x2024BE0)]);
  sub_80B2968(v0);
  return v2;
}
