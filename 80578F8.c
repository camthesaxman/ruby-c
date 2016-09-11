_BOOL4 __fastcall sub_80578F8(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (v1 - 0x2000000) >> 24 <= 1 || v2 == 36 || v2 == 9;
}
