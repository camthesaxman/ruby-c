int __fastcall sub_80884E8(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r1@1
  unsigned int v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+14h] [bp-4h]@1

  v1 = a1;
  v2 = ((unsigned int)v4000008 >> 2 << 14) & 0xFFFF;
  v3 = ((unsigned int)v4000008 >> 8 << 11) & 0xFFFF;
  *(_WORD *)(a1 + 32) = v4000008 >> 8 << 11;
  CpuSet(&gDarknessFieldMoveStreaksTiles, v2 + 100663296, 64);
  v5 = 0;
  CpuSet(&v5, v3 + 100663296, 83886592);
  LoadPalette((int)&gDarknessFieldMoveStreaksPalette, 240, 32);
  ++*(_WORD *)(v1 + 8);
  return v6;
}
