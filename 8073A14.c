int __fastcall LoadCompressedPalette(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r4@1
  unsigned int v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  v4 = a3 << 16;
  sub_800D238();
  v3 *= 2;
  v4 >>= 17;
  CpuSet(33747868, v3 + 33745608, v4);
  CpuSet(33747868, v3 + 33746632, v4);
  return v6;
}
