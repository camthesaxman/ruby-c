signed int __fastcall sub_80FED64(unsigned __int8 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( *(_BYTE *)(v1 + 33786070) == a1 )
      return 1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return 0;
}
