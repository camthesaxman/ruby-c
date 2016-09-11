int __fastcall sub_8078314(int a1)
{
  int v1; // r4@1
  __int16 v2; // r5@3
  int v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) > (signed int)*(_WORD *)(a1 + 50) )
    *(_WORD *)(a1 + 46) = -*(_WORD *)(a1 + 46);
  v2 = *(_WORD *)(a1 + 46);
  v3 = (*(_WORD *)(a1 + 50) - (signed int)*(_WORD *)(a1 + 48)) / *(_WORD *)(a1 + 46);
  if ( v3 < 0 )
    v3 = -v3;
  *(_WORD *)(v1 + 46) = v3;
  *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 54) - (signed int)*(_WORD *)(v1 + 52)) / *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 48) = v2;
  return v5;
}
