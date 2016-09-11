_BOOL4 __fastcall sub_80B7264(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1

  v1 = a1 << 24;
  v2 = v1 >> 24;
  return (v1 - 436207616) >> 24 <= 4 || ((v2 - 70) & 0xFF) <= 4 || ((v2 - 106) & 0xFF) <= 4 || ((v2 + 106) & 0xFF) <= 4;
}
