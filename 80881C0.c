int __fastcall sub_80881C0(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r4@1
  int v4; // [sp+0h] [bp-14h]@1
  int v5; // [sp+10h] [bp-4h]@1

  v1 = a1;
  v2 = ((unsigned int)v4000008 >> 8 << 11) & 0xFFFF;
  CpuSet(&gFieldMoveStreaksTiles, (((unsigned int)v4000008 >> 2 << 14) & 0xFFFF) + 100663296, 256);
  v4 = 0;
  CpuSet(&v4, v2 + 100663296, 83886592);
  LoadPalette((int)&gFieldMoveStreaksPalette, 240, 32);
  sub_808843C(v2);
  ++*(_WORD *)(v1 + 8);
  return v5;
}
