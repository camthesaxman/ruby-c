int __fastcall FillPalette(__int16 a1, int a2, int a3)
{
  __int16 v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  __int16 v7; // [sp+0h] [bp-14h]@1
  __int16 v8; // [sp+2h] [bp-12h]@1
  int v9; // [sp+10h] [bp-4h]@1

  v3 = a1;
  v7 = a1;
  v4 = 2 * a2 & 0x1FFFF;
  v5 = ((unsigned int)(a3 << 16) >> 17) | 0x1000000;
  CpuSet(&v7, v4 + 33745608, v5);
  v8 = v3;
  CpuSet(&v8, v4 + 33746632, v5);
  return v9;
}
