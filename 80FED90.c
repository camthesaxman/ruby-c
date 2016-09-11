int sub_80FED90()
{
  unsigned int v0; // r6@1
  unsigned int v1; // r3@1
  unsigned int v2; // r3@5
  int v3; // r1@7
  int v4; // r4@8
  unsigned int v5; // r1@9
  unsigned int v6; // r6@17
  int v7; // r3@17
  unsigned __int16 v8; // r7@18
  int v9; // r1@19
  _BYTE *v10; // r5@20
  int v11; // r4@21
  unsigned int v12; // r1@23
  int v14; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    *(_BYTE *)(v1 + 33786070) = 0;
    if ( v1 <= 0xB )
      *(_BYTE *)(v1 + 33786086) = 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0xF );
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(v2 + 33714510) )
    {
      v3 = 0;
      if ( (unsigned int)gUnknown_08402E40[8 * v20388F6 + 4] > 0 )
      {
        while ( 1 )
        {
          v4 = v3 + 1;
          if ( *(_BYTE *)(v20388D0 + v3) == *(_BYTE *)(v2 + 33714510) )
          {
            v5 = 0;
            if ( v0 > 0 && v20388D6 != v4 )
            {
              do
                v5 = (v5 + 1) & 0xFFFF;
              while ( v5 < v0 && *(_BYTE *)(v5 + 33786070) != v4 );
            }
            if ( v5 == v0 )
              break;
          }
          v3 = (unsigned __int16)v4;
          if ( (unsigned __int16)v4 >= (unsigned int)gUnknown_08402E40[8 * v20388F6 + 4] )
            goto _080FEE5A;
        }
        *(_BYTE *)(v0 + 33786070) = v4;
        v0 = (v0 + 1) & 0xFFFF;
      }
    }
_080FEE5A:
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0xF );
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = v7 + 1;
    if ( *(_BYTE *)(v7 + 33717692) )
    {
      v9 = 0;
      if ( (unsigned int)gUnknown_08402E40[8 * v20388F6 + 4] > 0 )
      {
        v10 = (_BYTE *)(v7 + 33717692);
        while ( 1 )
        {
          v11 = v9 + 1;
          if ( *(_BYTE *)(v20388D0 + v9) == *v10 && !(sub_80FED64(v9 + 1) << 24) )
          {
            v12 = 0;
            if ( v6 > 0 && v20388E6 != v11 )
            {
              do
                v12 = (v12 + 1) & 0xFFFF;
              while ( v12 < v6 && *(_BYTE *)(v12 + 33786086) != v11 );
            }
            if ( v12 == v6 )
              break;
          }
          v9 = (unsigned __int16)v11;
          if ( (unsigned __int16)v11 >= (unsigned int)gUnknown_08402E40[8 * v20388F6 + 4] )
            goto _080FEF0E;
        }
        *(_BYTE *)(v6 + 33786086) = v11;
        v6 = (v6 + 1) & 0xFFFF;
      }
    }
_080FEF0E:
    v7 = v8;
  }
  while ( v8 <= 0xBu );
  return v14;
}
