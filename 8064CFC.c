signed int sub_8064CFC()
{
  signed int result; // r0@2

  if ( FuncIsActiveTask(sub_8064CDC) << 24 )
  {
    result = 0;
  }
  else
  {
    sub_80597F4();
    result = 1;
  }
  return result;
}
