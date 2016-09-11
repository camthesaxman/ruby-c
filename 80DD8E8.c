int __fastcall sub_80DD8E8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, word_3004B08);
  *(_WORD *)(v1 + 36) = word_3004B00[0];
  *(_WORD *)(v1 + 50) = word_3004B02;
  *(_WORD *)(v1 + 52) -= word_3004B04;
  *(_WORD *)(v1 + 46) = 3;
  *(_WORD *)(v1 + 48) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80DD928;
  *(_BYTE *)(v1 + 62) |= 4u;
  return v3;
}
