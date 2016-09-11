_BYTE *__fastcall sub_80FBFF8(_BYTE *a1, unsigned int a2)
{
  _BYTE *result; // r0@3

  a2 = (unsigned __int16)a2;
  if ( (unsigned __int16)a2 == 86 )
  {
    result = StringCopy(a1, "Í¿½Ì¿Î");
  }
  else if ( a2 == 87 )
  {
    result = StringCopy(a1, &gUnknown_084117C9);
  }
  else
  {
    result = sub_80FBFB4(a1, a2, 0);
  }
  return result;
}
