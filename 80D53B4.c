int __fastcall sub_80D53B4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 48) = word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_BYTE *)(v1 + 62) |= 4u;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)sub_80D53F4);
  return v3;
}
