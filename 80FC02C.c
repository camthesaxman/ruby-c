_BYTE *__fastcall sub_80FC02C(_BYTE *a1, unsigned int a2)
{
  _BYTE *result; // r0@2

  a2 = (unsigned __int16)a2;
  if ( (unsigned __int16)a2 == 66 )
    result = StringCopy(a1, &gUnknown_084117DB);
  else
    result = sub_80FBFF8(a1, a2);
  return result;
}
