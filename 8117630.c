int __fastcall sub_8117630(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  ConvertIntToDecimalStringN(
    &gStringVar1,
    *(&gUnknown_083F8DF0[2 * ((unsigned int)v202E8CC >> 7)] + (v202E8CC & 1)),
    2,
    1);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)&gUnknown_081C40DF);
  MenuDrawTextWindow(0, 0xEu);
  MenuPrint((int)gStringVar4, 1, 0xFu);
  dword_3004B20[10 * v1] = (int)sub_81174F8;
  return v3;
}
