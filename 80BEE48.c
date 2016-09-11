signed int __fastcall sub_80BEE48(unsigned __int8 a1)
{
  unsigned int v2; // r1@3

  if ( a1 )
  {
    v2 = 0;
    while ( *(_BYTE *)(4 * v2 + 0x20281F0) != a1 )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 0xF )
        return 0;
    }
  }
  return 1;
}
