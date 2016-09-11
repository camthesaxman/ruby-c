signed int __fastcall sub_80C727C(signed int a1)
{
  signed int result; // r0@2

  if ( a1 % 120 )
    result = a1 % 10 <= 4;
  else
    result = -1;
  return result;
}
