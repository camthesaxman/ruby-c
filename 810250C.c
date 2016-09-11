int __fastcall sub_810250C(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  unsigned int v2; // r2@1

  v1 = a1;
  v2 = 0;
  do
  {
    if ( v1 & 1 )
      return (unsigned __int8)gUnknown_083ECE3A[v2];
    v1 >>= 1;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  return 0;
}
