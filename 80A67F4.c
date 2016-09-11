int __fastcall BuyMenuDisplayMessage(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = itemid_get_market_price(a1);
  sub_80B7A94(((unsigned int)(v4 << 16) >> 17) * v3, 6, 6, 11);
  v5 = itemid_get_market_price(v2);
  ConvertIntToDecimalStringN(&gStringVar1, ((unsigned int)(v5 << 16) >> 17) * v3, 0, 6);
  return v7;
}
