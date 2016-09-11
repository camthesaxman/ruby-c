int __fastcall sub_812616C(int a1, unsigned int a2)
{
  int v2; // r3@1
  unsigned int i; // r2@1

  v2 = 0;
  for ( i = 0; i < a2; ++i )
    v2 += *(_BYTE *)(a1 + i);
  return v2;
}
