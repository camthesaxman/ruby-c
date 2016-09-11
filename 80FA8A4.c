char *__fastcall unref_sub_80FA8A4(__int16 a1, unsigned __int16 a2)
{
  int v2; // r0@1
  char *result; // r0@2

  v2 = sub_80FA86C(a1, a2);
  if ( v2 )
    result = (char *)&gUnknown_083E5A18 + 8 * v2;
  else
    result = 0;
  return result;
}
