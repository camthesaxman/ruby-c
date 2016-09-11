int __fastcall sub_80435A4(int a1)
{
  int v1; // r2@1
  int v2; // r1@1
  int v3; // r3@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 54) += *(_WORD *)(a1 + 48);
  v2 = *(_WORD *)(a1 + 50);
  *(_WORD *)(a1 + 56) += v2;
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 54) / 256;
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 56) / 256;
  v3 = v2 + *(_WORD *)(a1 + 52);
  *(_WORD *)(a1 + 50) = v3;
  if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) > *(_WORD *)(v1 + 34) + 20 && v3 << 16 > 0 )
    DestroySprite(a1);
  return v5;
}
