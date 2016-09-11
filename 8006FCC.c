void *__fastcall GetExpandedPlaceholder(unsigned int a1)
{
  void *result; // r0@2

  if ( a1 > 0xD )
    result = &gExpandedPlaceholder_Empty;
  else
    result = (void *)call_via_r0(*(&sExpandPlaceholderFuncs + a1));
  return result;
}
