int __fastcall sub_80784A8(int a1)
{
  int v1; // r1@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    sub_8078104(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    v1 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 52);
    *(_WORD *)(a1 + 52) = v1;
    *(_WORD *)(a1 + 54) += *(_WORD *)(a1 + 50);
    *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 56) + 36] = v1 << 16 >> 24;
    *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 56) + 38] = *(_WORD *)(a1 + 54) << 16 >> 24;
  }
  return v3;
}
