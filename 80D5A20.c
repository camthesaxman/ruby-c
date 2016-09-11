int __fastcall sub_80D5A20(int a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  *(_WORD *)(a1 + 32) = word_3004B00[0];
  *(_WORD *)(a1 + 34) = word_3004B02;
  *(_WORD *)(a1 + 46) = 0;
  *(_WORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 50) = 0;
  *(_WORD *)(a1 + 58) = word_3004B04;
  *(_WORD *)(a1 + 60) = word_3004B06;
  *(_WORD *)(a1 + 4) = *(_WORD *)(a1 + 4) & 0xFC00 | ((*(_WORD *)(a1 + 4) & 0x3FF) + 16 * word_3004B08) & 0x3FF;
  *(_DWORD *)(a1 + 28) = sub_80D5A74;
  return v2;
}
