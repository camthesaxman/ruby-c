int __fastcall sub_811677C(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  ConvertIntToDecimalStringN(&gStringVar1, v2019019 * *((_WORD *)v1 + 6), 0, 2);
  StringExpandPlaceholders(gStringVar4, (unsigned __int8 *)gUnknown_081C41BD);
  MenuDrawTextWindow(0, 0xEu);
  MenuPrint((int)gStringVar4, 1, 0xFu);
  *((_WORD *)v1 + 5) = *((_WORD *)v1 + 6) * v2019019;
  *((_WORD *)v1 + 11) = 0;
  *v1 = (int)sub_81166E8;
  return v3;
}
