int __fastcall sub_80CCF04(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) - 24;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 58) = 0;
  *(_WORD *)(v1 + 60) = 16;
  v4000050 = 16192;
  v4000052 = (*(_WORD *)(v1 + 60) << 8) | *(_WORD *)(v1 + 58);
  *(_DWORD *)(v1 + 28) = sub_80CCF70;
  return v3;
}
