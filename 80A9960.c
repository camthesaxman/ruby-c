int __fastcall itemid_get_quality(unsigned __int16 a1)
{
  return HIBYTE(gItems[22 * (unsigned __int16)itemid_sanitize(a1) + 9]);
}
