int __fastcall sub_80DDB6C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  sub_8078BD4(v1);
  *(_DWORD *)(v1 + 28) = sub_80DDBD8;
  *(_WORD *)(v1 + 58) = 16;
  v4000050 = 16192;
  v4000052 = *(_WORD *)(v1 + 58);
  return v3;
}
