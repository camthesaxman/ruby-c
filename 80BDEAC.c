signed int __fastcall sub_80BDEAC(int a1)
{
  signed int v1; // r2@1

  v1 = 2;
  if ( *(_BYTE *)a1 == 252 && *(_BYTE *)(a1 + 1) == 21 )
    v1 = 1;
  return v1;
}
