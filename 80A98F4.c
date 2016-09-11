int __fastcall itemid_get_number(unsigned __int16 a1)
{
  return gItems[22 * (unsigned __int16)itemid_sanitize(a1) + 7];
}
