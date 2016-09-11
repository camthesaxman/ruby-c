int sub_80C8448()
{
  int result; // r0@2

  sub_80C837C();
  if ( v202E8DC == 0xFFFF )
    result = 0;
  else
    result = 16 * v202E8DC + 33785876;
  return result;
}
