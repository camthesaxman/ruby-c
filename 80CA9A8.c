int __fastcall sub_80CA9A8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 56) = word_3004B04;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80CA9F8;
  return v3;
}
