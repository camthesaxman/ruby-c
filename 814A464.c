signed int sub_814A464()
{
  char v0; // r2@1
  signed int result; // r0@2

  v0 = ProcessMenuInput();
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
    v2024D1E = v0;
    dword_3004AE8 = (int)*(&off_842C2A0 + 2 * v0);
    result = 0;
  }
  return result;
}
