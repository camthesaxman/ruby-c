void **__fastcall GetTextWindowFrameGraphics(int a1)
{
  void **result; // r0@2

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 > 0x13u )
    result = &gUnknown_083761F0;
  else
    result = &gUnknown_083761F0 + 2 * a1;
  return result;
}
