signed int sub_80A78F4()
{
  signed int v0; // r0@2
  signed int v1; // r1@2

  if ( gLinkOpen == 1 )
  {
    v0 = sub_80A76B8();
    v1 = 2;
    if ( v0 )
      v1 = 1;
  }
  else
  {
    v1 = 0;
  }
  return v1;
}
