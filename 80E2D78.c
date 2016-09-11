int __fastcall sub_80E2D78(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  BeginHardwarePaletteFade(word_3004B00[0], word_3004B02, word_3004B04, word_3004B06, word_3004B08);
  dword_3004B20[10 * v1] = (int)sub_80E2DB8;
  return v3;
}
