int sub_802B960()
{
  int v0; // r4@1
  int v2; // [sp+14h] [bp-4h]@0

  pokemon_catch((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * (v2024C07 ^ 1) + 0x2024A6A));
  v0 = v2024C07 ^ 1;
  word_3004308 = *(_WORD *)(88 * v0 + 0x2024A80);
  GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v0 + 0x2024A6A), 2);
  ++v2024C10;
  return v2;
}
