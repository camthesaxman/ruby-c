int __fastcall sub_8045048(int a1)
{
  int v1; // r2@1
  int v2; // r1@1
  __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 32;
  *(_WORD *)(a1 + 48) = v2;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
    v3 = *(_WORD *)(a1 + 36) - (v2 << 16 >> 20);
  else
    v3 = (v2 << 16 >> 20) + *(_WORD *)(a1 + 36);
  *(_WORD *)(v1 + 36) = v3;
  *(_WORD *)(v1 + 48) &= 0xFu;
  return v5;
}
