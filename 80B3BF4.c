int __fastcall sub_80B3BF4(unsigned __int8 a1)
{
  int v1; // r5@1
  const char *v2; // r1@5
  int (__fastcall *v3)(unsigned __int8); // r2@5
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(7u, 8u, 0xDu, 0xDu);
  sub_80A3FA0((int)gBG1TilemapBuffer, 8u, 9, 4, 4u, 0);
  sub_80B379C();
  sub_80B3420();
  if ( !(IsEnoughMoney(v2025BC4, v20386A0) << 24) )
  {
    DisplayItemMessageOnField(v1, &gUnknown_0840EDD2, sub_80B3BD0, 50145);
    return v5;
  }
  if ( byte_3000714 )
  {
    if ( !(IsThereStorageSpaceForDecoration(*(_BYTE *)(2
                                                     * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                                     + dword_300070C)) << 24) )
    {
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EE14);
      DisplayItemMessageOnField(v1, &gStringVar4, sub_80B3BD0, 50145);
      return v5;
    }
    if ( byte_3000714 == 1 )
      v2 = "ÎÜÕâß";
    else
      v2 = (const char *)&gUnknown_0840EDA9;
    v3 = sub_80B3B80;
    goto _080B3CD8;
  }
  if ( !(sub_80A9424(
           *(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711) + dword_300070C),
           HIWORD(dword_3004B20[10 * v1 + 2])) << 24) )
  {
    v2 = (const char *)&gUnknown_0840EDF1;
    v3 = sub_80B3BD0;
_080B3CD8:
    DisplayItemMessageOnField(v1, v2, v3, 50145);
    return v5;
  }
  DisplayItemMessageOnField(v1, "ÂÙæÙ", sub_80B3B80, 50145);
  sub_80B4470(v1);
  return v5;
}
