int __fastcall sub_80E1E2C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = word_3004B02;
  *(_WORD *)(v1 + 46) = word_3004B02;
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) = word_3004B04;
  *(_WORD *)(v1 + 52) = word_3004B06;
  *(_WORD *)(v1 + 54) = word_3004B08;
  *(_WORD *)(v1 + 56) = word_3004B0A;
  *(_WORD *)(v1 + 58) = word_3004B0C;
  *(_WORD *)(v1 + 60) = word_3004B00[0];
  v3 = sub_80E1DC4(*(_WORD *)(v1 + 60));
  BlendPalettes(v3, word_3004B08, word_3004B06);
  *(_BYTE *)(v1 + 62) |= 4u;
  *(_DWORD *)(v1 + 28) = sub_80E1E80;
  return v5;
}
