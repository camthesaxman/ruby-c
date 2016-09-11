unsigned int __fastcall sub_80BD1FC(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r5@1
  signed int v2; // r0@2
  unsigned int v3; // r4@2
  signed int v4; // r2@2
  unsigned int v5; // r1@4

  v1 = a1;
  if ( *a1 )
  {
    v2 = sub_80BD12C(*a1) << 16;
    v3 = (unsigned int)v2 >> 16;
    v4 = v2 >> 16;
    if ( v2 >> 16 )
    {
      if ( v4 == -1 )
      {
        v3 = (unsigned __int8)sub_80BD170();
        if ( v3 )
          goto _080BD26C;
        v3 = (unsigned __int8)sub_80BD1B0();
        if ( v3 )
          goto _080BD26C;
      }
      else
      {
        v5 = *(_BYTE *)(160 * v4 + 0x202713D);
        if ( (v5 & 0xF) != 1 && (v5 >> 6 != 2 || (v1[1] & 0xF) == 1) )
        {
          v3 = (unsigned __int8)v3;
_080BD26C:
          sub_80BD034(v3, (const char *)v1);
          return v3;
        }
      }
    }
  }
  return 0;
}
