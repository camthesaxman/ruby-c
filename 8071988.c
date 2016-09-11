signed int sub_8071988()
{
  signed int result; // r0@3

  if ( mplay_has_finished_maybe() << 24 || !(sub_8071730() << 24) )
  {
    result = 0;
  }
  else
  {
    sub_8071700();
    result = 1;
  }
  return result;
}
