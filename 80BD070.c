signed int __fastcall sub_80BD070(int a1, int a2)
{
  unsigned int v2; // r2@1

  v2 = 0;
  do
  {
    if ( *(_BYTE *)(a1 + 9 + v2) != *(_BYTE *)(a2 + 9 + v2) )
      return 0;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return 1;
}
