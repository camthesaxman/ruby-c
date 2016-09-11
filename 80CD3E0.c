int __fastcall sub_80CD3E0(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 32) -= 32;
  *(_WORD *)(a1 + 34) -= 32;
  *(_WORD *)(a1 + 46) = 20;
  *(_DWORD *)(a1 + 28) = sub_80782D8;
  oamt_set_x3A_32(a1, (int)sub_80CD408);
  return v2;
}
