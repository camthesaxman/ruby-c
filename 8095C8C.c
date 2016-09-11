int __fastcall sub_8095C8C(int a1, unsigned __int16 a2, int a3, int a4, unsigned __int16 a5, unsigned __int16 a6, __int16 a7, unsigned __int16 a8, unsigned __int16 a9)
{
  int v9; // r6@1
  int v10; // r7@1
  unsigned int i; // r4@1
  int v13; // [sp+18h] [bp-4h]@0

  v9 = a1 + 2 * ((32 * a3 & 0x1FFFFF) + a2);
  v10 = a4 + 2 * (a6 * a9 + a5);
  for ( i = 0; i < a8; i = (i + 1) & 0xFFFF )
  {
    CpuSet(v10, v9, a7 & 0x7FFF);
    v9 += 64;
    v10 += 2 * a9;
  }
  return v13;
}
