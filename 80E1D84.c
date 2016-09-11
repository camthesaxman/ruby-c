int __fastcall sub_80E1D84(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = sub_80E1DC4(word_3004B00[0]);
  BeginNormalPaletteFade(v2, word_3004B02, word_3004B04, word_3004B06, word_3004B08);
  *(_BYTE *)(v1 + 62) |= 4u;
  *(_DWORD *)(v1 + 28) = sub_80E1E0C;
  return v4;
}
