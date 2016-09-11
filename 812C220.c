int __fastcall sub_812C220(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 90;
  *(_DWORD *)(a1 + 28) = sub_80782D8;
  *(_WORD *)(a1 + 48) = 7;
  oamt_set_x3A_32(a1, (int)sub_812C268);
  v4000050 = 16192;
  v4000052 = ((16 - *(_WORD *)(v1 + 48)) << 8) | *(_WORD *)(v1 + 48);
  return v3;
}
