signed int __fastcall sub_807D574(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  signed int result; // r0@3

  v1 = 0;
  if ( v202FEE2 <= 0u )
  {
_0807D5B2:
    result = 0;
  }
  else
  {
    while ( *(_BYTE *)(v1 + 33750748) != a1 )
    {
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 >= v202FEE2 )
        goto _0807D5B2;
    }
    result = 1;
  }
  return result;
}
