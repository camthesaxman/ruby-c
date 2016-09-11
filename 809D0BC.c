int __fastcall sub_809D0BC(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  unsigned int v3; // r7@1
  unsigned int v4; // r4@1
  unsigned int v5; // r8@2
  int v7; // [sp+18h] [bp-4h]@0

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_WORD *)(a1 + 10);
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = (unsigned int)*(_WORD *)(a1 + 8) >> 1;
    do
    {
      CpuSet(v1, v2, v5 & 0x1FFFFF);
      v2 += 64;
      v1 += 64;
      ++v4;
    }
    while ( v4 < v3 );
  }
  return v7;
}
