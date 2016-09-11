int __fastcall pokemon_order_func(unsigned __int8 a1)
{
  unsigned int v1; // r3@1
  int v2; // r2@1
  unsigned int v3; // r1@2

  v1 = 0;
  v2 = 0;
  do
  {
    v3 = *(_BYTE *)(v1 + 33784944);
    if ( v3 >> 4 == a1 )
      return v2;
    v2 = (v2 + 1) & 0xFF;
    if ( (v3 & 0xF) == a1 )
      return v2;
    v2 = (v2 + 1) & 0xFF;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 2 );
  return 0;
}
