int __fastcall sub_80882B4(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 18) -= 16;
  if ( *(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 38) + 60] )
    ++*(_WORD *)(a1 + 8);
  return v2;
}
