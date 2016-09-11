int __fastcall ClearBGMem(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+0h] [bp-14h]@1
  int v5; // [sp+4h] [bp-10h]@2
  int v6; // [sp+10h] [bp-4h]@3

  v1 = a1;
  v4 = 0;
  CpuFastSet(&v4, *(_DWORD *)(a1 + 16), 16777224);
  v2 = *(_DWORD *)(v1 + 20);
  if ( v2 )
  {
    v5 = 0;
    CpuFastSet(&v5, v2, 16777728);
  }
  return v6;
}
