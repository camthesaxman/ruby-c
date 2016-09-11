int __fastcall sub_80DFE14(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 52) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 46) = 126;
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 52) = -*(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 54) = -*(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 58) = -40;
  *(_DWORD *)(v1 + 28) = sub_80DFE90;
  call_via_r1(v1, sub_80DFE90);
  return v3;
}
