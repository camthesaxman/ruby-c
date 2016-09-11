int __fastcall GetVarPointer(unsigned __int16 a1)
{
  int result; // r0@2

  if ( a1 > 0x3FFFu )
  {
    if ( a1 & 0x8000 )
      result = gUnknown_0814B14C[a1 - 0x8000];
    else
      result = 2 * a1 + 33679988;
  }
  else
  {
    result = 0;
  }
  return result;
}
