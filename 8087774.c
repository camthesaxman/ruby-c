int __fastcall sub_8087774(int a1, int a2)
{
  if ( gSprites[68 * *(_WORD *)(a1 + 10) + 43] == 2 )
  {
    *(_BYTE *)(a2 + 1) |= 0x20u;
    ++*(_WORD *)(a1 + 8);
  }
  return 0;
}
