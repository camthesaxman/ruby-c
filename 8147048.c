int sub_8147048()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v203933E = 1;
  if ( dword_3005EA8 )
  {
    while ( !(sub_814737C(dword_3005EA8) << 24) )
    {
      MenuDrawTextWindow(1u, 0xCu);
      MenuPrint((int)"Ω‹Ÿ◊ﬂ", 2, 0xDu);
      sub_8125C3C(v203933C);
      if ( dword_3005EA8 )
        MenuPrint((int)"Õ’ÍŸ", 2, 0xDu);
      v0 = (v0 + 1) & 0xFF;
      if ( !dword_3005EA8 || v0 > 2 )
        goto _081470A6;
    }
    MenuDrawTextWindow(1u, 0xCu);
    MenuPrint((int)&gUnknown_0841164E, 2, 0xDu);
    SetMainCallback2((int)sub_8147154);
  }
  else
  {
_081470A6:
    if ( v0 == 3 )
    {
      MenuDrawTextWindow(1u, 0xCu);
      MenuPrint((int)&gUnknown_0841164E, 2, 0xDu);
      SetMainCallback2((int)sub_81471A4);
    }
    else
    {
      MenuDrawTextWindow(1u, 0xCu);
      if ( dword_3005EBC )
        MenuPrint((int)"Õ’ÍŸ", 2, 0xDu);
      else
        MenuPrint((int)"Õ’ÍŸ", 2, 0xDu);
    }
    SetMainCallback2((int)sub_81471A4);
  }
  return v2;
}
