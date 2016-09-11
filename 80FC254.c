int sub_80FC254()
{
  int v0; // r1@3
  int *v1; // r4@4
  int v3; // [sp+8h] [bp-4h]@0

  if ( v200001E != 2 && v200001E != 4 )
  {
    MenuDrawTextWindow(0x10u, 0x10u);
    MenuPrint(33557064, 17, 0x11u);
    MenuZeroFillWindowRect(0x10u, 0xEu, 0x1Du, 0xFu);
  }
  else
  {
    v0 = 0;
    while ( 1 )
    {
      v1 = &gUnknown_083E79C0[2 * v0];
      if ( v200001C == *((_WORD *)v1 + 2) )
        break;
      v0 = (v0 + 1) & 0xFFFF;
      if ( v0 )
        goto _080FC2BE;
    }
    if ( FlagGet(*((_WORD *)v1 + 3)) << 24 )
    {
      MenuDrawTextWindow(0x10u, 0xEu);
      MenuPrint(33554440, 17, 0xFu);
      sub_8072B4C(*(_BYTE **)(4 * v200001F + *v1), 29, 0x11u);
      return v3;
    }
_080FC2BE:
    MenuDrawTextWindow(0x10u, 0x10u);
    MenuPrint(33554440, 17, 0x11u);
    MenuZeroFillWindowRect(0x10u, 0xEu, 0x1Du, 0xFu);
  }
  return v3;
}
