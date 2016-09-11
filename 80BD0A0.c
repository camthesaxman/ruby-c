signed int __fastcall sub_80BD0A0(int a1, int a2)
{
  unsigned int v2; // r3@1
  signed int result; // r0@4

  v2 = 0;
  if ( *(_BYTE *)(a1 + 2) == 255 && *(_BYTE *)(a2 + 2) == 255 )
  {
_080BD0E2:
    result = 1;
  }
  else
  {
    while ( *(_BYTE *)(a1 + 2 + v2) == *(_BYTE *)(a2 + 2 + v2) )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 6 || *(_BYTE *)(a1 + 2 + v2) == 255 && *(_BYTE *)(a2 + 2 + v2) == 255 )
        goto _080BD0E2;
    }
    result = 0;
  }
  return result;
}
