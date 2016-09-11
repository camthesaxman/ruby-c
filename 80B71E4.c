_BOOL4 __fastcall sub_80B71E4(int a1)
{
  unsigned int v1; // r0@1

  v1 = a1 << 24;
  return (v1 - 1258291200) >> 24 <= 4 || (((v1 >> 24) + 101) & 0xFF) <= 4;
}
