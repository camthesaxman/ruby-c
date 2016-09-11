int sub_80FCD54()
{
  int v0; // r7@1
  _WORD *v1; // r5@2
  int v2; // r6@2
  _WORD *v3; // r5@2
  int v4; // r6@5
  _WORD *v5; // r5@6
  int v6; // r7@6
  _WORD *v7; // r5@6
  int v9; // [sp+18h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int8)byte_3005DF0 > 0u )
  {
    do
    {
      v1 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005E04 * ((unsigned __int8)byte_3005DFC + v0)
                   + 2 * (unsigned __int8)byte_3005DE8);
      *v1 = sub_80FD50C(v1, v1 + 1);
      v2 = 1;
      v3 = v1 + 1;
      for ( LOBYTE(v0) = v0 + 1; v2 < (unsigned __int8)byte_3005DF8 - 1; ++v3 )
      {
        *v3 = sub_80FD50C(v3, v3 + 1);
        *v3 = sub_80FD50C(v3, v3 - 1);
        v2 = (v2 + 1) & 0xFF;
      }
      *v3 = sub_80FD50C(v3, v3 - 1);
      v0 = (unsigned __int8)v0;
    }
    while ( (unsigned __int8)v0 < (unsigned int)(unsigned __int8)byte_3005DF0 );
  }
  v4 = 0;
  if ( (unsigned __int8)byte_3005DF8 > 0u )
  {
    do
    {
      v5 = (_WORD *)(dword_3005DEC
                   + 2 * (unsigned __int8)byte_3005DFC * (unsigned __int8)byte_3005E04
                   + 2 * ((unsigned __int8)byte_3005DE8 + v4));
      *v5 = sub_80FD50C(v5, &v5[(unsigned __int8)byte_3005E04]);
      v6 = 1;
      v7 = &v5[(unsigned __int8)byte_3005E04];
      for ( LOBYTE(v4) = v4 + 1; v6 < (unsigned __int8)byte_3005DF0 - 1; v7 += (unsigned __int8)byte_3005E04 )
      {
        *v7 = sub_80FD50C(v7, &v7[(unsigned __int8)byte_3005E04]);
        *v7 = sub_80FD50C(v7, &v7[-(unsigned __int8)byte_3005E04]);
        v6 = (v6 + 1) & 0xFF;
      }
      *v7 = sub_80FD50C(v7, &v7[-(unsigned __int8)byte_3005E04]);
      v4 = (unsigned __int8)v4;
    }
    while ( (unsigned __int8)v4 < (unsigned int)(unsigned __int8)byte_3005DF8 );
  }
  return v9;
}
