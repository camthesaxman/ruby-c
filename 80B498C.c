char *__fastcall GetBerryInfo(unsigned __int8 a1)
{
  signed int v1; // r4@1
  char *result; // r0@3

  v1 = a1;
  if ( a1 == 43 && sub_80B4940() )
  {
    result = (char *)33720468;
  }
  else
  {
    if ( ((v1 - 1) & 0xFFu) > 0x2A )
      v1 = 1;
    result = &asc_83CD2AE[28 * v1 + 2];
  }
  return result;
}
