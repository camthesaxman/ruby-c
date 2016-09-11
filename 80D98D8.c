int __fastcall sub_80D98D8(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = word_3004B00[0];
  *(_WORD *)(a1 + 34) = 120;
  *(_WORD *)(a1 + 46) = word_3004B06;
  sub_8079BF4((_WORD *)(a1 + 54), (_WORD *)(a1 + 56), 30720);
  *(_WORD *)(v1 + 58) = word_3004B02;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 4 * word_3004B04) & 0x3FF;
  *(_DWORD *)(v1 + 28) = sub_80D9934;
  return v3;
}
