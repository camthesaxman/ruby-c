int __fastcall sub_80DFF1C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += word_3004B00[0];
  *(_WORD *)(a1 + 34) += word_3004B02;
  StartSpriteAffineAnim(a1, word_3004B04);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 48) = word_3004B08;
  *(_WORD *)(v1 + 50) = word_3004B0A;
  *(_DWORD *)(v1 + 28) = sub_80DFF58;
  return v3;
}
