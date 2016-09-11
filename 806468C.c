_BOOL4 __fastcall sub_806468C(int a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( !(*(_WORD *)(a1 + 54) & 1) )
  {
    little_step(a1, *(_WORD *)(a1 + 52) & 0xFF);
    ++*(_WORD *)(v1 + 56);
  }
  ++*(_WORD *)(v1 + 54);
  return (signed int)*(_WORD *)(v1 + 56) > 15;
}
