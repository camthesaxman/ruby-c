signed int __fastcall sub_80C72A8(int a1)
{
  signed int result; // r0@2

  if ( (a1 + 120) % 180 )
    result = 0;
  else
    result = -1;
  return result;
}
