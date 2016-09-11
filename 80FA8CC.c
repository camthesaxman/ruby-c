char *__fastcall sub_80FA8CC(unsigned int a1)
{
  char *result; // r0@3

  if ( a1 && a1 <= 0x16 )
    result = (char *)&gUnknown_083E5A18 + 8 * a1;
  else
    result = 0;
  return result;
}
