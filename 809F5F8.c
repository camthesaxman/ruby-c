signed int sub_809F5F8()
{
  signed int result; // r0@2

  if ( v2018074 )
  {
    call_via_r1(33652752, *(&gUnknown_083C1588 + v201800B));
    result = 1;
  }
  else
  {
    sub_809FAC8(33652752);
    ++v2018074;
    result = 0;
  }
  return result;
}
