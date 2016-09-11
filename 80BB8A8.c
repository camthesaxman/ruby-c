signed int __fastcall sub_80BB8A8(int a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( *(_BYTE *)(a1 + v1) == 255 )
      return v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 6 );
  return 7;
}
