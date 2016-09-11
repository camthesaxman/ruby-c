int __fastcall sub_80D0E30(int a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 0) - 16;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077FC0(v202F7C9) + 16;
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = 16;
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 56) = sub_807A100(v202F7C9, 0) + 2;
  *(_WORD *)(v1 + 58) = (char)sub_8076F98(0x3Fu);
  *(_DWORD *)(v1 + 28) = sub_80D0E8C;
  return v3;
}
