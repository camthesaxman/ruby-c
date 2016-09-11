int __fastcall sub_80D9E94(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B04;
  v2 = *(_WORD *)(a1 + 32);
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) = v2 + word_3004B00[0];
  v3 = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 52) = v3;
  *(_WORD *)(v1 + 54) = v3 + word_3004B02;
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 56) = *(_WORD *)(v1 + 48) / word_3004B04;
  *(_WORD *)(v1 + 58) = *(_WORD *)(v1 + 50) / word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80D9EE8;
  return v5;
}
