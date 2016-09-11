int __fastcall sub_80B3DC8(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r6@1
  unsigned int v3; // r4@1
  unsigned __int16 v4; // r4@4
  int *v5; // r5@4
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)sub_80A52C4(BYTE3(v1), (unsigned __int8)byte_3000715) == 1 )
    sub_80B37F8(v2);
  if ( word_300179E & 1 )
  {
    v4 = itemid_get_market_price(*(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                          + dword_300070C));
    v5 = &dword_3004B20[10 * v2];
    v20386A0 = *((_WORD *)v5 + 5) * ((signed int)v4 >> GetPriceReduction(1));
    MenuZeroFillWindowRect(0, 0xAu, 0xDu, 0xDu);
    sub_80A3FA0((int)gBG1TilemapBuffer, 1u, 11, 12, 2u, 0);
    sub_80B379C();
    sub_80B3420();
    itemid_copy_name(
      *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C),
      &gStringVar1);
    ConvertIntToDecimalStringN((char *)&gStringVar2, *((_WORD *)v5 + 5), 0, 2);
    ConvertIntToDecimalStringN((char *)&gStringVar3, v20386A0, 0, 8);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840ECD8);
    DisplayItemMessageOnField(v2, &gStringVar4, sub_80B3D38, 50145);
  }
  else if ( word_300179E & 2 )
  {
    sub_80B39D0((unsigned __int8)byte_3000711, (unsigned __int8)byte_3000711, 0);
    sub_80B4378(v3);
  }
  return v7;
}
