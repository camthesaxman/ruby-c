unsigned int __fastcall sub_8057450(int a1)
{
  unsigned int result; // r0@1

  result = (unsigned int)((a1 << 24) - 1879048192) >> 24;
  if ( result > 3 )
    result = 0;
  return result;
}
