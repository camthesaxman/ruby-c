signed int sub_8090FC0()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r0@2
  unsigned int v2; // r4@2
  unsigned __int16 v3; // r0@2

  v0 = 0;
  do
  {
    v1 = (v0 + 1) << 16;
    v2 = v1 >> 16;
    v3 = HoennToNationalOrder(HIWORD(v1));
    if ( !(sub_8090D90(v3, 1u) << 24) )
      return 0;
    v0 = v2;
  }
  while ( v2 <= 0xC7 );
  return 1;
}
