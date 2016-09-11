int __fastcall sub_810A6C4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 32) > 120 )
    *(_WORD *)(a1 + 32) -= 4;
  if ( (signed int)*(_WORD *)(a1 + 32) <= 119 )
    *(_WORD *)(a1 + 32) += 4;
  if ( (signed int)*(_WORD *)(a1 + 34) > 64 )
    *(_WORD *)(a1 + 34) -= 2;
  if ( (signed int)*(_WORD *)(a1 + 34) <= 63 )
    *(_WORD *)(a1 + 34) += 2;
  return v2;
}
