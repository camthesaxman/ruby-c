int __fastcall sub_803F1DC(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r3@1
  unsigned int v4; // r5@1
  int v5; // r7@1
  int v6; // r0@1
  signed int v8; // r2@6
  unsigned int v9; // r3@14
  unsigned int v10; // r6@16
  unsigned int v11; // r3@30
  int v12; // r6@30

  v3 = a1;
  v4 = a3;
  v5 = 6;
  v6 = (int)*(&gItemEffectTable + a1 - 13);
  if ( v6 )
  {
    if ( v3 != 175 )
      goto _0803F21A;
  }
  else if ( v3 != 175 )
  {
    return 0;
  }
  v6 = 28 * v2024A60 + 33705464;
_0803F21A:
  v8 = 0;
  do
  {
    if ( v8 == 4 )
    {
      v9 = *(_BYTE *)(v6 + 4);
      if ( v9 & 0x20 )
        v9 &= 0xDFu;
      v10 = 0;
      while ( v9 )
      {
        if ( v9 & 1 && v10 <= 7 )
        {
          switch ( v10 )
          {
            case 2u:
              if ( v9 & 0x10 )
                v9 &= 0xEFu;
              goto _0803F29C;
            case 0u:
            case 1u:
            case 3u:
_0803F29C:
              if ( 4 == a2 && v9 & v4 )
                return v5;
              v5 = (v5 + 1) & 0xFF;
              break;
            case 7u:
              if ( 4 != a2 )
                break;
              return 0;
            default:
              break;
          }
        }
        v10 = (v10 + 1) & 0xFF;
        v9 >>= 1;
        if ( 4 == a2 )
          v4 >>= 1;
      }
    }
    else if ( v8 <= 4 )
    {
      if ( v8 >= 0 && v8 == a2 )
        return 0;
    }
    else if ( v8 == 5 )
    {
      v11 = *(_BYTE *)(v6 + 5);
      v12 = 0;
      while ( v11 )
      {
        if ( v11 & 1 && v12 >= 0 )
        {
          if ( v12 <= 6 )
          {
            if ( 5 == a2 && v11 & v4 )
              return v5;
            v5 = (v5 + 1) & 0xFF;
          }
          else if ( v12 == 7 && 5 == a2 )
          {
            return 0;
          }
        }
        v12 = (v12 + 1) & 0xFF;
        v11 >>= 1;
        if ( 5 == a2 )
          v4 >>= 1;
      }
    }
    ++v8;
  }
  while ( v8 <= 5 );
  return v5;
}
