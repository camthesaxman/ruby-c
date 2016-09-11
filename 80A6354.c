int __fastcall sub_80A6354(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_80A7590(v1);
  LOWORD(dword_3004B20[10 * v2 + 7]) = (unsigned __int8)byte_3005D10[4 * v2038559 + 1]
                                     + (unsigned __int8)byte_3005D10[4 * v2038559]
                                     + 1;
  v3 = sub_80A48E8(v2, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
  sub_80A73FC(v3);
  itemid_copy_name(v203855E, &gStringVar2);
  if ( itemid_get_market_price(v203855E) << 16 )
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EEC4);
    DisplayCannotUseItemMessage(v2, &gStringVar4, sub_80A648C, 1);
  }
  else
  {
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EEA4);
    DisplayCannotUseItemMessage(v2, &gStringVar4, sub_80A6444, 1);
  }
  return v5;
}
