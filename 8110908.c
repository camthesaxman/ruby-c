int __fastcall sub_8110908(unsigned __int16 a1)
{
  int v1; // r7@1
  int v2; // r6@2
  int v3; // r6@5
  __int16 *v4; // r4@5
  unsigned int v5; // r2@6
  signed int v6; // r0@7
  int v7; // r6@16
  char *v8; // r1@16
  int v9; // r5@17
  signed int v10; // r0@18
  int v12; // [sp+18h] [bp-4h]@0

  v1 = a1;
  if ( a1 == 408 )
  {
    v2000112 = 0;
    if ( v202888B )
    {
      sub_8134538(33554448, 33554449);
      v2000012 = *(_BYTE *)(get_mapheader_by_bank_and_number(v2000010, v2000011) + 20);
      v2000110 = 1;
    }
    else
    {
      v2000110 = v202888B;
    }
  }
  else
  {
    v2000110 = 0;
    v2000112 = 0;
    v2 = 0;
    do
    {
      if ( (unsigned __int16)gUnknown_083F856C[v2] == a1 )
        return v12;
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( !v2 );
    v3 = 0;
    v4 = gUnknown_083F856E;
    if ( gUnknown_083F856E[0] != 412 )
    {
      do
      {
        v5 = 3 * v3;
        if ( v1 == (unsigned __int16)gUnknown_083F856E[3 * v3] )
        {
          v6 = (unsigned __int16)v4[v5 + 1];
          if ( v6 == 24 )
            goto LABEL_34;
          if ( v6 <= 24 )
          {
            if ( !v4[v5 + 1] )
              sub_8110A98(0, (unsigned __int16)word_83F8572[v5]);
            goto _081109BA;
          }
          if ( v6 == 26 )
LABEL_34:
            sub_8110AE4((unsigned __int16)word_83F8570[3 * v3], (unsigned __int16)word_83F8572[3 * v3]);
        }
_081109BA:
        v3 = (v3 + 1) & 0xFFFF;
        v4 = gUnknown_083F856E;
      }
      while ( gUnknown_083F856E[3 * v3] != 412 );
    }
    v7 = 0;
    v8 = gWildMonHeaders;
    if ( (unsigned __int8)gWildMonHeaders[0] != 255 )
    {
      do
      {
        v9 = (int)&v8[20 * v7];
        if ( sub_8110BA4(v9, v1) << 24 )
        {
          v10 = *(_BYTE *)v9;
          if ( v10 == 24 )
            goto LABEL_35;
          if ( v10 <= 24 )
          {
            if ( !*(_BYTE *)v9 )
              sub_8110A98(0, *(_BYTE *)(v9 + 1));
            goto _08110A28;
          }
          if ( v10 == 26 )
LABEL_35:
            sub_8110AE4((unsigned __int8)gWildMonHeaders[20 * v7], (unsigned __int8)gWildMonHeaders[20 * v7 + 1]);
        }
_08110A28:
        v7 = (v7 + 1) & 0xFFFF;
        v8 = gWildMonHeaders;
      }
      while ( (unsigned __int8)gWildMonHeaders[20 * v7] != 255 );
    }
  }
  return v12;
}
