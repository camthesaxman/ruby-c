int __fastcall sub_8056134(int a1, int a2, int **a3, int a4, int a5, int a6, int a7)
{
  int v7; // r7@1
  int v8; // r6@1
  int v9; // r5@1
  int v10; // r4@2
  int v12; // [sp+14h] [bp-4h]@0

  v7 = **a3;
  v8 = (*a3)[3] + 2 * (**a3 * a5 + a4);
  v9 = dword_3004878 + 2 * (a2 * dword_3004870 + a1);
  if ( a7 > 0 )
  {
    v10 = a7;
    do
    {
      CpuSet(v8, v9, a6 & 0x1FFFFF);
      v9 += 2 * dword_3004870;
      v8 += 2 * v7;
      --v10;
    }
    while ( v10 );
  }
  return v12;
}
