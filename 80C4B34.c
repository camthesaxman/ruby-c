int __fastcall sub_80C4B34(int a1)
{
  int v1; // r4@1
  signed int v2; // r2@1

  v1 = 0;
  v2 = 1;
  do
  {
    if ( *(_BYTE *)(a1 + v1) < (unsigned int)*(_BYTE *)(a1 + v2) )
      v1 = (unsigned __int8)v2;
    ++v2;
  }
  while ( v2 <= 3 );
  return v1;
}
