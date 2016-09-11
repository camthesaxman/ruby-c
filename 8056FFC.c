_BOOL4 __fastcall sub_8056FFC(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (v1 - 0x40000000) >> 24 <= 8
      || ((v2 - 80) & 0xFF) <= 3
      || v2 == 208
      || v2 == 210
      || v2 == 19
      || v2 == 32
      || v2 == 187
      || v2 == 188;
}
