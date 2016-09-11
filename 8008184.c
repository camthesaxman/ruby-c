int *__fastcall SetLinkDebugValues(int a1, int a2)
{
  int *result; // r0@1

  gLinkDebugValue1 = a1;
  result = &gLinkDebugValue2;
  gLinkDebugValue2 = a2;
  return result;
}
