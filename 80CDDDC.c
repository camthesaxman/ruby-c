int __fastcall sub_80CDDDC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) - 48;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  oamt_set_x3A_32(v1, (int)sub_80CDE78);
  *(_DWORD *)(v1 + 28) = sub_8078600;
  return v3;
}
