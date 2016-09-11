int __fastcall unref_sub_8078414(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 36) + *(_WORD *)(a1 + 32);
  *(_WORD *)(v1 + 52) = *(_WORD *)(a1 + 38) + *(_WORD *)(v1 + 34);
  *(_WORD *)(a1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  *(_DWORD *)(v1 + 28) = sub_80782F8;
  return v3;
}
