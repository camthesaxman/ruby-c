int __fastcall sub_80E0F1C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 46) = 20;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_WORD *)(v1 + 56) = -40;
  sub_80786EC(v1);
  *(_DWORD *)(v1 + 28) = sub_80E0F84;
  return v3;
}
