int __fastcall unref_sub_8031364(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 44) |= 0x40u;
  *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  StartSpriteAffineAnim(a1, 1);
  AnimateSprite(v1);
  return v3;
}
