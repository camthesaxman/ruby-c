int __fastcall sub_80E2C60(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = IndexOfSpritePaletteTag(word_3004B00[0]);
  sub_80E2C8C(v1, 1 << (v2 + 16));
  return v4;
}
