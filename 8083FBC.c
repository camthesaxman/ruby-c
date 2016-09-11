signed int sub_8083FBC()
{
  unsigned int v0; // r4@1
  int *v1; // r1@2
  int v2; // r0@3

  v0 = 0;
  do
  {
    v1 = &dword_30048A0[9 * v0];
    if ( *(_BYTE *)v1 << 31 )
    {
      v2 = *((_BYTE *)v1 + 7);
      if ( v2 == 1 || v2 == 3 )
      {
        if ( sub_8084004(v0) << 24 )
          return 1;
      }
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return 0;
}
