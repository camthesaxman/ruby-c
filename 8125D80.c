signed int sub_8125D80()
{
  signed int result; // r0@2

  if ( dword_3004820 == 1 )
  {
    save_serialize_game();
    sub_812546C();
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
