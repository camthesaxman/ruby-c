int __fastcall itemid_get_x12(unsigned __int16 a1)
{
  return LOBYTE(gItems[22 * (unsigned __int16)itemid_sanitize(a1) + 9]);
}
