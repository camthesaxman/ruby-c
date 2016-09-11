signed int __fastcall sub_8040D8C(unsigned __int16 a1, int a2)
{
  int v2; // r2@1

  v2 = 2;
  if ( *(_BYTE *)a2 == 252 && *(_BYTE *)(a2 + 1) == 21 )
    v2 = 1;
  return sub_8040D3C(a1, a2, v2);
}
