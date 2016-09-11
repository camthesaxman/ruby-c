int __fastcall sub_80DD9A4(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r3@1
  __int16 v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
  v2 = sub_8077ABC(v202F7C9, 1u);
  v3 = word_3004B00[0];
  *(_WORD *)(v1 + 32) += word_3004B00[0];
  v4 = word_3004B02;
  *(_WORD *)(v1 + 34) = v2 + word_3004B02;
  *(_WORD *)(v1 + 48) = v3;
  *(_WORD *)(v1 + 50) = v4;
  *(_WORD *)(v1 + 56) = word_3004B04;
  StartSpriteAnim(v1, word_3004B06);
  *(_DWORD *)(v1 + 28) = sub_80DD9FC;
  return v6;
}
