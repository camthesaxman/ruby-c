signed int sub_8083F2C()
{
  int v0; // r1@1

  v0 = (char)ProcessMenuInput();
  if ( v0 == -2 )
    return 0;
  if ( v0 != -1 )
  {
    dword_3004AE8 = (int)*(&off_839B2C4 + 2 * v0);
    return 0;
  }
  sub_8071C20();
  return 1;
}
