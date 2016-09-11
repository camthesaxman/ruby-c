int __fastcall sub_8085FB4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( (signed int)*(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 20) + 46] > 1 )
  {
    ++*(_WORD *)(a1 + 38);
    ++*(_WORD *)(a1 + 8);
  }
  return v2;
}
