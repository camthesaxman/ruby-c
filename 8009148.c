_BOOL4 __fastcall IsLeapYear(unsigned __int8 a1)
{
  return !(a1 & 3) && a1 % 0x64u << 24 || !(a1 % 400);
}
