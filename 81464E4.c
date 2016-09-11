int sub_81464E4()
{
  char *v0; // r5@1
  unsigned int v1; // r4@1
  signed int v2; // r6@3
  signed int v3; // r4@3
  int v5; // [sp+10h] [bp-4h]@0

  v0 = GetBerryInfo(v203855E + 124);
  ConvertIntToDecimalStringN(gStringVar1, v203855E - 132, 2, 2);
  MenuPrint((int)gStringVar1, 12, 4u);
  MenuPrint((int)v0, 14, 4u);
  MenuPrint(*((_DWORD *)v0 + 3), 4, 0xEu);
  MenuPrint(*((_DWORD *)v0 + 4), 4, 0x10u);
  v1 = 1000 * *((_WORD *)v0 + 4) / 254;
  if ( v1 % 0xA > 4 )
    v1 += 10;
  v2 = v1 % 0x64 / 0xA;
  v3 = v1 / 0x64;
  MenuPrint((int)"Õ√‘ø", 11, 7u);
  if ( *((_WORD *)v0 + 4) )
  {
    ConvertIntToDecimalStringN(gStringVar1, v3, 0, 2);
    ConvertIntToDecimalStringN(gStringVar2, v2, 0, 2);
    MenuPrint((int)&gUnknown_0840EB15, 16, 7u);
  }
  else
  {
    MenuPrint((int)&gUnknown_0840E674, 16, 7u);
  }
  MenuPrint((int)"¿√Ã«", 11, 9u);
  if ( v0[7] )
    MenuPrint((int)(&gUnknown_0841192C)[4 * ((unsigned __int8)v0[7] - 1)], 16, 9u);
  else
    MenuPrint((int)&gUnknown_0840E674, 16, 9u);
  return v5;
}
