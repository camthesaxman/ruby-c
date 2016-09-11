int __fastcall sub_8090C28(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 32) <= 119 )
    *(_WORD *)(a1 + 32) += 2;
  if ( (signed int)*(_WORD *)(a1 + 32) > 120 )
    *(_WORD *)(a1 + 32) -= 2;
  if ( (signed int)*(_WORD *)(a1 + 34) <= 79 )
    ++*(_WORD *)(a1 + 34);
  if ( (signed int)*(_WORD *)(a1 + 34) > 80 )
    --*(_WORD *)(a1 + 34);
  return v2;
}
