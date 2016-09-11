int __fastcall sub_810FF78(int a1)
{
  int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@1

  v1 = a1;
  v3 = 0;
  CpuSet(&v3, a1, 16777224);
  *(_BYTE *)v1 = -1;
  *(_WORD *)(v1 + 8) = 0;
  *(_WORD *)(v1 + 10) = 0;
  *(_WORD *)(v1 + 12) = 0;
  *(_WORD *)(v1 + 14) = 0;
  return v4;
}
