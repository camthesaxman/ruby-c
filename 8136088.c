int __fastcall sub_8136088(int a1)
{
  unsigned int v1; // r3@1
  int *v2; // r4@1
  int v3; // r1@2
  int v5; // [sp+4h] [bp-4h]@0

  *(_DWORD *)(a1 + 184) = 0;
  v1 = 0;
  v2 = (int *)a1;
  do
  {
    v3 = *v2;
    ++v2;
    *(_DWORD *)(a1 + 184) += v3;
    ++v1;
  }
  while ( v1 <= 0x2D );
  return v5;
}
