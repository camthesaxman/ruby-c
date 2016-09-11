signed int sub_80A78C4()
{
  signed int result; // r0@2

  if ( gLinkOpen == 1 )
  {
    sub_80A7868();
    sub_80A75A8();
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
