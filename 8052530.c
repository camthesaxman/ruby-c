int sub_8052530()
{
  unsigned int v0; // r6@1
  char v2; // [sp+0h] [bp-B8h]@1
  __int16 v3; // [sp+6h] [bp-B2h]@1
  _BYTE v4[3]; // [sp+9h] [bp-AFh]@1
  char v5; // [sp+Ch] [bp-ACh]@1
  char v6; // [sp+11h] [bp-A7h]@5
  char v7; // [sp+80h] [bp-38h]@5
  char *v8; // [sp+84h] [bp-34h]@1
  char *v9; // [sp+88h] [bp-30h]@1
  char *v10; // [sp+8Ch] [bp-2Ch]@1
  char *v11; // [sp+90h] [bp-28h]@1
  char *v12; // [sp+94h] [bp-24h]@1
  int v13; // [sp+B4h] [bp-4h]@8

  StringCopy(&v2, &OtherText_BPM);
  MenuPrint(&v2, 2, 0);
  ConvertIntToDecimalStringN(&v2, word_300057A / 100, 2, 3);
  MenuPrint(&v2, 6, 0);
  v0 = 0;
  v8 = &v2 + 3;
  v9 = (char *)&v3;
  v10 = v4;
  v11 = &v5;
  v12 = &v5 + 3;
  do
  {
    if ( byte_3000560 == v0 )
    {
      v2 = -17;
      itemid_copy_name((byte_3000561[v0] + 133) & 0xFFFF, &v2 + 1);
    }
    else
    {
      itemid_copy_name((byte_3000561[v0] + 133) & 0xFFFF, &v2);
      v3 = -256;
    }
    MenuPrint(&v2, 2, (3 * v0 + 3) & 0xFF);
    ConvertIntToDecimalStringN(&v2, gBerries[28 * byte_3000561[v0] + 21], 2, 2);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToDecimalStringN(v8, gBerries[28 * byte_3000561[v0] + 22], 2, 2);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToDecimalStringN(v9, gBerries[28 * byte_3000561[v0] + 23], 2, 2);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToDecimalStringN(v10, gBerries[28 * byte_3000561[v0] + 24], 2, 2);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToDecimalStringN(v11, gBerries[28 * byte_3000561[v0] + 25], 2, 2);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToDecimalStringN(v12, gBerries[28 * byte_3000561[v0] + 26], 2, 2);
    v7 = -1;
    v6 = -1;
    MenuPrint(&v2, 7, (3 * v0 + 3) & 0xFF);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  if ( byte_3000568 )
  {
    StringCopy(&v2, (&gUnknown_083F7EB8)[4 * (unsigned __int8)byte_3000568]);
    MenuPrint(&v2, 2, 15);
    ConvertIntToHexStringN(&v2, (unsigned __int8)byte_3000571, 2, 2u);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToHexStringN(v8, (unsigned __int8)byte_3000572, 2, 2u);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToHexStringN(v9, (unsigned __int8)byte_3000573, 2, 2u);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToHexStringN(v10, (unsigned __int8)byte_3000574, 2, 2u);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToHexStringN(v11, (unsigned __int8)byte_3000575, 2, 2u);
    StringAppend(&v2, &gUnknown_082165F8);
    ConvertIntToHexStringN(v12, (unsigned __int8)byte_3000576, 2, 2u);
    v6 |= v7;
    MenuPrint(&v2, 7, 17);
  }
  return v13;
}
