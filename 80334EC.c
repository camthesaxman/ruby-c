int sub_80334EC()
{
  int v0; // r1@1
  int result; // r0@1

  dword_3004330[v2024A60] = (int)sub_8032AFC;
  v0 = gBitTable[v2024A60];
  result = v2024A64 & ~v0;
  v2024A64 &= ~v0;
  return result;
}
