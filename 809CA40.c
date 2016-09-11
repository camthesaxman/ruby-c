int sub_809CA40()
{
  int v0; // r3@1
  int *v1; // r2@2

  v0 = 0;
  do
  {
    v1 = &gUnknown_083BBBD4[2 * v0];
    if ( *((_BYTE *)v1 + 4) == v20384E4 )
      return (unsigned __int8)call_via_r0(*v1);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( gUnknown_083BBBD4[2 * v0] );
  return 0;
}
