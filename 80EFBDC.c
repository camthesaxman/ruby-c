signed int __fastcall sub_80EFBDC(int a1)
{
  signed int v1; // r4@1
  signed __int16 v2; // r0@3
  signed __int16 v3; // r3@4

  v1 = 1;
  if ( !(a1 << 24) )
  {
    if ( v2007698 <= 0xF7u )
    {
      v2 = v2007698 + 8;
      goto _080EFC10;
    }
    v3 = 256;
_080EFC1A:
    v1 = 0;
    goto _080EFC1C;
  }
  if ( v2007698 <= 0xA8u )
  {
    v3 = 160;
    goto _080EFC1A;
  }
  v2 = v2007698 - 8;
_080EFC10:
  v3 = v2;
_080EFC1C:
  v2007698 = v3;
  v4000012 = (unsigned __int8)v3;
  return v1;
}
