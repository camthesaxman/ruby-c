int sub_8103668()
{
  signed __int16 v0; // r0@7
  int v1; // r6@9
  unsigned int v2; // r5@11
  unsigned __int8 v3; // r0@12
  int v4; // r1@13
  int v5; // r6@14
  __int16 v6; // r4@15
  unsigned __int8 v7; // r0@15
  unsigned __int8 v9; // [sp+0h] [bp-18h]@8
  int v10; // [sp+14h] [bp-4h]@22

  if ( v2000034 && v2000004 & 0x80 )
  {
    if ( v2000034 != 2 )
    {
      v9 = sub_8102BF8(0, v2000034 - v200002E);
      if ( !(sub_8103520((char *)&v9) << 24) )
        return v10;
      LOWORD(v1) = 2;
      if ( v2000034 == 3 )
        LOWORD(v1) = 3;
      v2 = 0;
      do
      {
        v3 = sub_8102BF8(1u, v1);
        if ( v9 == v3 )
        {
          v2000036 = v1;
          v2000030 = 0;
          return v10;
        }
        v4 = (v2 << 16) + 0x10000;
        v1 = ((signed __int16)v1 - 1) & 0xFFFF;
        v2 = (unsigned int)v4 >> 16;
      }
      while ( v4 >> 16 <= 1 );
      LOWORD(v5) = 1;
      while ( 1 )
      {
        v6 = v5;
        v7 = sub_8102BF8(1u, v2000034 - v5);
        if ( v9 == v7 )
          break;
        v5 = ((signed __int16)v5 + 1) & 0xFFFF;
        if ( (signed __int16)(v6 + 1) > 4 )
          return v10;
      }
      v0 = v2000034;
      if ( v2000034 == 1 )
      {
        if ( (signed __int16)v5 <= 2 )
        {
          v2000036 = 2;
          v2000030 = v5 + 1;
          return v10;
        }
      }
      else
      {
        if ( (signed __int16)v5 > 2 )
        {
          v2000036 = 2;
          v2000030 = v5 - 1;
          return v10;
        }
        v0 = 3;
      }
      v2000036 = v0;
      v2000030 = v5;
      return v10;
    }
    j5_08111E84();
  }
  return v10;
}
