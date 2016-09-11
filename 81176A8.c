int __fastcall sub_81176A8(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r6@1
  signed int v3; // r4@1
  int v5; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  ConvertIntToDecimalStringN(&gStringVar1, *((_WORD *)v2 + 17), 1, 4);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_0842C9E7);
  MenuDrawTextWindow(0, 0);
  sub_8072B4C(gStringVar4, 9, 1u);
  v3 = *(&gUnknown_083F8DF0[2 * ((unsigned int)v202E8CC >> 7)] + (v202E8CC & 1));
  ConvertIntToDecimalStringN(&gStringVar1, v3, 2, 1);
  if ( *((_WORD *)v2 + 17) < v3 )
  {
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_081C411C);
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gStringVar4, 1, 0xFu);
    *v2 = (int)sub_81175DC;
    *((_WORD *)v2 + 17) = 0;
    *((_WORD *)v2 + 4) = 0;
  }
  else if ( v202E8CC & 0x80 && v202E8CC & 1 )
  {
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gUnknown_081C4139, 1, 0xFu);
    sub_8116C34(v1, (int)sub_8117630, 0xFFFFu, 3);
  }
  else
  {
    StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_081C40DF);
    MenuDrawTextWindow(0, 0xEu);
    MenuPrint((int)gStringVar4, 1, 0xFu);
    dword_3004B20[10 * v1] = (int)sub_81174F8;
  }
  return v5;
}
