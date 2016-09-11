int __fastcall itemid_get_market_price(unsigned __int16 a1)
{
  return gItems[22 * (unsigned __int16)itemid_sanitize(a1) + 8];
}
