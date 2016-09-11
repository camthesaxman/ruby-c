int __fastcall HoennToNationalOrder(unsigned __int16 a1)
{
  int result; // r0@2

  if ( a1 )
    result = (unsigned __int16)gHoennToNationalOrder[a1 - 1];
  else
    result = 0;
  return result;
}
