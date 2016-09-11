int __fastcall sub_8088338(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@1

  v1 = a1;
  v3 = 0;
  CpuSet(&v3, (((unsigned int)v4000008 >> 8 << 11) & 0xFFFF) + 100663296, 83886592);
  *(_WORD *)(v1 + 10) = 241;
  *(_WORD *)(v1 + 12) = 161;
  *(_WORD *)(v1 + 14) = *(_WORD *)(v1 + 30);
  *(_WORD *)(v1 + 16) = *(_WORD *)(v1 + 32);
  ++*(_WORD *)(v1 + 8);
  return v4;
}
