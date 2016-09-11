int __fastcall sub_80EF428(signed int a1, unsigned __int8 a2)
{
  int v2; // r2@1
  int v3; // r1@1
  void **v4; // r1@7
  int v6; // [sp+4h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v2 = a2;
  v3 = 0;
  if ( (unsigned __int8)a1 == 1 )
  {
    v4 = &gUnknown_083E31CC;
  }
  else if ( a1 > 1 )
  {
    if ( a1 != 2 )
      goto _080EF464;
    v4 = &gUnknown_083E31D8;
  }
  else
  {
    if ( a1 )
      goto _080EF464;
    v4 = &gUnknown_083E31B0;
  }
  v3 = (int)v4[v2];
_080EF464:
  sub_8072C74(33790816, v3, 0xC0u, 2u);
  MenuPrint(33790816, 3, 0x11u);
  return v6;
}
