signed int sub_8064DB4()
{
  signed int result; // r0@2

  if ( FuncIsActiveTask(sub_8064D38) << 24 )
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
