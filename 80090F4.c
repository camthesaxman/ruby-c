int RtcDisableInterrupts()
{
  int result; // r0@1

  sSavedIme = v4000208;
  result = 0;
  v4000208 = 0;
  return result;
}
