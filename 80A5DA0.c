int __fastcall sub_80A5DA0(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  itemid_copy_name(a1, &gStringVar1);
  if ( v2 <= 0x63 )
    ConvertIntToDecimalStringN((char *)&gStringVar2, v2, 0, 2);
  else
    ConvertIntToDecimalStringN((char *)&gStringVar2, v2, 0, 3);
  sub_80A4DA4((int)gBG1TilemapBuffer);
  sub_80A7528(5);
  sub_80A5D78();
  return v4;
}
