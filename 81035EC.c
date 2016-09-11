int j5_08111E84()
{
  int v0; // r6@4
  __int16 v1; // r4@5
  unsigned __int8 v2; // r0@5
  unsigned __int8 v4; // [sp+0h] [bp-18h]@3
  int v5; // [sp+14h] [bp-4h]@8

  if ( v2000034 )
  {
    if ( v2000004 & 0x80 )
    {
      v4 = sub_8102BF8(0, v2000034 - v200002E);
      if ( sub_8103520((char *)&v4) << 24 )
      {
        LOWORD(v0) = 0;
        while ( 1 )
        {
          v1 = v0;
          v2 = sub_8102BF8(1u, v2000034 - v0);
          if ( v4 == v2 )
            break;
          v0 = ((signed __int16)v0 + 1) & 0xFFFF;
          if ( (signed __int16)(v1 + 1) > 4 )
            return v5;
        }
        v2000036 = v2000034;
        v2000030 = v0;
      }
    }
  }
  return v5;
}
