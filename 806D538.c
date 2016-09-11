int __fastcall sub_806D538(unsigned __int8 a1, signed int a2)
{
  int v2; // r4@1
  signed int v3; // r2@9
  int v5; // [sp+4h] [bp-4h]@0

  v2 = a1;
  a2 = (unsigned __int8)a2;
  if ( a1 != 255 )
  {
    if ( a2 == 1 )
    {
      v3 = 19;
    }
    else if ( a2 > 1 )
    {
      if ( a2 != 2 )
      {
        if ( a2 == 3 )
          MenuDrawTextWindow(0, 16, 18, 19);
        goto _0806D58A;
      }
      v3 = 22;
    }
    else
    {
      if ( a2 )
        goto _0806D58A;
      v3 = 23;
    }
    MenuDrawTextWindow(0, 16, v3, 19);
_0806D58A:
    MenuPrint(gUnknown_08376624[v2], 1, 17);
  }
  return v5;
}
