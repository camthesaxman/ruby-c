int __fastcall sub_80888F0(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 32) >= -64 )
    *(_WORD *)(a1 + 32) -= 20;
  else
    *(_WORD *)(a1 + 60) = 1;
  return v2;
}
