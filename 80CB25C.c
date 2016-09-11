int __fastcall sub_80CB25C(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 0);
  *(_BYTE *)(v1 + 44) |= 0x80u;
  StartSpriteAffineAnim(v1, word_3004B04);
  *(_WORD *)(v1 + 58) = word_3004B04;
  *(_WORD *)(v1 + 60) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80CB298;
  return v3;
}
