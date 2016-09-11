unsigned int __fastcall sub_804114C(unsigned int a1)
{
  unsigned int v1; // r2@1
  unsigned int v2; // r1@1

  v1 = a1;
  v2 = 0;
  do
  {
    if ( v1 & 1 )
      return v2;
    v1 >>= 1;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0x1F );
  return 0;
}
