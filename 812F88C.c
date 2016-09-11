int __fastcall sub_812F88C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r6@1
  __int16 v3; // r5@1
  int v5; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_WORD *)(a1 + 34);
  sub_8078650(a1);
  StartSpriteAffineAnim(v1, word_3004B00[0]);
  sub_812F804(v1, *(_WORD *)(v1 + 32), *(_WORD *)(v1 + 34), v2, v3, 64);
  *(_WORD *)(v1 + 46) = 0;
  *(_DWORD *)(v1 + 28) = sub_812F8DC;
  return v5;
}
