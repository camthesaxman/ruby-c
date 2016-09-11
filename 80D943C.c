int __fastcall sub_80D943C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 1);
  StartSpriteAnim(v1, word_3004B04);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)sub_80D9474);
  return v3;
}
