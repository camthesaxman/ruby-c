int __fastcall sub_8078364(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    sub_8078104(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 48);
    *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 50);
  }
  return v2;
}
