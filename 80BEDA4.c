signed int __fastcall GetPriceReduction(unsigned __int8 a1)
{
  signed int result; // r0@3
  unsigned int v2; // r2@4

  if ( !a1 )
    goto _080BEDF6;
  v2 = 0;
  while ( *(_BYTE *)(4 * v2 + 0x20281F0) != a1 )
  {
    v2 = (v2 + 1) & 0xFF;
    if ( v2 > 0xF )
      goto _080BEDF6;
  }
  if ( *(_BYTE *)(4 * v2 + 0x20281F1) == 2 && IsPriceDiscounted(a1) << 24 )
    result = 1;
  else
_080BEDF6:
    result = 0;
  return result;
}
