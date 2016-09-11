_BOOL4 __fastcall sub_80B720C(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (v1 - 100663296) >> 24 <= 0xE
      || ((v2 - 26) & 0xFF) <= 4
      || ((v2 - 75) & 0xFF) <= 4
      || ((v2 - 86) & 0xFF) <= 0xE
      || ((v2 - 106) & 0xFF) <= 4
      || ((v2 + 101) & 0xFF) <= 4;
}
