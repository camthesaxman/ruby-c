_BOOL4 __fastcall sub_80574EC(int a1)
{
  unsigned int v1; // r0@1

  v1 = a1 << 24;
  return (v1 - 285212672) >> 24 <= 1 || v1 >> 24 == 20;
}
