int __fastcall sub_80F9834(int a1)
{
  __int16 v1; // r1@5
  int v2; // r1@9
  int v3; // r1@12
  int v5; // [sp+0h] [bp-4h]@0

  if ( !*(_WORD *)(a1 + 48) )
    *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 46);
  if ( !*(_WORD *)(a1 + 52) )
    *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 50);
  v1 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(a1 + 48) = v1;
  ++*(_WORD *)(a1 + 52);
  if ( v1 > 2 )
    *(_WORD *)(a1 + 48) = 0;
  if ( (signed int)*(_WORD *)(a1 + 52) > 2 )
    *(_WORD *)(a1 + 52) = 0;
  v2 = *(_WORD *)(a1 + 36);
  if ( v2 == 8 || v2 == -8 )
    *(_WORD *)(a1 + 36) = 0;
  v3 = *(_WORD *)(a1 + 38);
  if ( v3 == 8 || v3 == -8 )
    *(_WORD *)(a1 + 38) = 0;
  return v5;
}
