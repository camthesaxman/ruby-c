unsigned int sub_810FB9C()
{
  unsigned int v0; // r3@1
  unsigned int v1; // r5@1
  char v2; // r4@2
  char v3; // r0@3

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = gUnknown_083F8408[v1];
    if ( !(((signed int)v2026AF6 >> v2) & 1) )
    {
      v3 = Random();
      v0 = v1;
      if ( v3 & 1 )
      {
        v2026AF6 |= 1 << v2;
        return v0;
      }
    }
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 7 );
  v2026AF6 |= 1 << gUnknown_083F8408[v0];
  return v0;
}
