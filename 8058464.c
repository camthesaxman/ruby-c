signed int __fastcall sub_8058464(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1

  v3 = a2;
  v4 = a3;
  if ( !*(_WORD *)(a3 + 10) )
    sub_8058428(a1, a2 + 4 * *(_WORD *)(a3 + 8), *(_WORD *)(a3 + 12), *(_WORD *)(a3 + 14));
  if ( *(_WORD *)(v4 + 10) == *(_BYTE *)(4 * *(_WORD *)(v4 + 8) + v3) )
  {
    *(_WORD *)(v4 + 10) = 0;
    if ( !*(_BYTE *)(4 * ++*(_WORD *)(v4 + 8) + v3) )
      return 0;
  }
  else
  {
    ++*(_WORD *)(v4 + 10);
  }
  return 1;
}
