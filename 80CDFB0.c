int __fastcall sub_80CDFB0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) - 12;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 2;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 56) = (char)sub_8076F98(0xC0u);
  *(_DWORD *)(v1 + 28) = sub_80CE000;
  return v3;
}
