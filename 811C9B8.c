int __fastcall sub_811C9B8(int a1)
{
  int v1; // r3@1
  int v2; // r1@1

  v1 = *(_WORD *)(a1 + 50);
  v2 = v1 + *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 48) = v2;
  *(_WORD *)(a1 + 32) += v2;
  if ( !(v2 << 16) )
  {
    ++*(_WORD *)(a1 + 46);
    *(_WORD *)(a1 + 50) = -(signed __int16)v1;
    *(_WORD *)(a1 + 58) = 1;
  }
  return 0;
}
