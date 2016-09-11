char *__fastcall itemid_get_item(unsigned __int16 a1)
{
  return (char *)&gItems + 44 * (unsigned __int16)itemid_sanitize(a1);
}
