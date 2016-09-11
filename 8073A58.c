int __fastcall LoadPalette(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  unsigned int v5; // r5@1
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = 2 * a2 & 0x1FFFF;
  v5 = (unsigned int)(a3 << 16) >> 17;
  CpuSet(a1, v4 + 33745608, v5);
  CpuSet(v3, v4 + 33746632, v5);
  return v7;
}
