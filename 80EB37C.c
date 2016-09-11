signed int __fastcall sub_80EB37C(int a1)
{
  unsigned int v1; // r1@1
  signed int v2; // r2@2
  unsigned int v3; // r5@2
  unsigned int v4; // r3@8

  v1 = a1 << 16;
  if ( (unsigned __int16)a1 == 0xFFFF )
    return 0;
  v2 = v1 >> 25;
  v3 = a1 & 0x1FF;
  if ( v1 >> 25 <= 0x15 )
  {
    if ( v2 > 19 )
    {
      if ( v2 != 21 )
        goto _080EB3E0;
    }
    else if ( v2 < 18 && v2 )
    {
_080EB3E0:
      if ( v3 < (unsigned __int8)gEasyChatGroupSizes[v2] )
        return 0;
      return 1;
    }
    v4 = 0;
    if ( (unsigned __int8)gEasyChatGroupSizes[v2] > 0u )
    {
      while ( v3 != *(_WORD *)(2 * v4 + gEasyChatGroupWords[v2]) )
      {
        v4 = (v4 + 1) & 0xFFFF;
        if ( v4 >= (unsigned __int8)gEasyChatGroupSizes[v2] )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
