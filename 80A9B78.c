signed int sub_80A9B78()
{
  int v0; // r1@1
  signed int result; // r0@2

  v0 = (char)ProcessMenuInput();
  if ( v0 == -2 )
  {
    result = 0;
  }
  else if ( v0 == -1 )
  {
    sub_8071C20();
    result = 1;
  }
  else
  {
    dword_3004AE8 = (int)*(&off_83C91F4 + 2 * v0);
    result = 0;
  }
  return result;
}
