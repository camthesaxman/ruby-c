unsigned int sub_8084DC4()
{
  int v0; // r7@3
  unsigned int v1; // r5@4
  int v2; // r5@6
  unsigned int v3; // r4@7
  unsigned __int8 v4; // r6@7
  char *v5; // r5@8
  char v6; // r2@10
  unsigned int v7; // r5@13
  unsigned int result; // r0@15
  int v9; // [sp+0h] [bp-30h]@5

  if ( GetSafariZoneFlag() == 1 && (unsigned __int16)Random() % 0x64u <= 0x4F && (v0 = sub_80C8448()) != 0 )
  {
    v1 = 0;
    do
    {
      *((_BYTE *)&v9 + v1) = v1;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 0x18 );
    v2 = 0;
    do
    {
      v3 = (v2 + 1) & 0xFF;
      v4 = v2 + 1;
      if ( v3 <= 0x18 )
      {
        v5 = (char *)&v9 + v2;
        do
        {
          if ( Random() & 1 )
          {
            v6 = *v5;
            *v5 = *((_BYTE *)&v9 + v3);
            *((_BYTE *)&v9 + v3) = v6;
          }
          v3 = (v3 + 1) & 0xFF;
        }
        while ( v3 <= 0x18 );
      }
      v2 = v4;
    }
    while ( v4 <= 0x17u );
    v7 = 0;
    while ( sub_810CAE4(*((_BYTE *)&v9 + v7), v0) << 16 <= 0 )
    {
      v7 = (v7 + 1) & 0xFF;
      if ( v7 > 0x18 )
        goto _08084E5E;
    }
    result = *((_BYTE *)&v9 + v7);
  }
  else
  {
_08084E5E:
    result = (unsigned __int16)Random() % 0x19u & 0xFF;
  }
  return result;
}
