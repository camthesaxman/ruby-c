int __fastcall sub_80E21A8(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int16 v2; // r0@1
  char v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = word_3004B02;
  *((_WORD *)v1 + 5) = word_3004B02;
  *((_WORD *)v1 + 6) = word_3004B04;
  *((_WORD *)v1 + 7) = word_3004B06;
  *((_WORD *)v1 + 8) = word_3004B08;
  *((_WORD *)v1 + 9) = word_3004B0A;
  *((_WORD *)v1 + 10) = word_3004B0C;
  v2 = word_3004B00[0];
  *((_WORD *)v1 + 11) = word_3004B00[0];
  v3 = IndexOfSpritePaletteTag(v2);
  BeginNormalPaletteFade(1 << (v3 + 16), 0, word_3004B08, word_3004B08, word_3004B06);
  *v1 = (int)sub_80E2214;
  return v5;
}
