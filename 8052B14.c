int ShowBerryBlenderRecordWindow()
{
  signed int v0; // r8@1
  unsigned int v1; // r7@1
  _WORD *v2; // r6@1
  unsigned int v3; // r4@2
  int v4; // r0@2
  char *v5; // r0@2
  int v7; // [sp+0h] [bp-3Ch]@2
  int v8; // [sp+38h] [bp-4h]@3

  MenuDrawTextWindow(6, 3, 23, 16);
  MenuPrint("╪©ллс", 8, 4);
  MenuPrint(&gUnknown_0842C30A, 8, 9);
  v0 = 0;
  v1 = 150994944;
  v2 = (_WORD *)33710240;
  do
  {
    v3 = *v2;
    v4 = sub_8072C14(&v7, v3 / 0x64, 18, 1);
    *(_BYTE *)v4 = 0;
    *(_BYTE *)(v4 + 1) = -83;
    *(_BYTE *)(v4 + 2) = 0;
    v5 = ConvertIntToDecimalStringN((char *)(v4 + 3), v3 % 0x64, 2, 2);
    StringAppend(v5, &gUnknown_0842D4C5);
    MenuPrint(&v7, 15, v1 >> 24);
    v1 += 0x2000000;
    ++v2;
    ++v0;
  }
  while ( v0 <= 2 );
  return v8;
}
