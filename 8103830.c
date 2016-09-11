int sub_8103830()
{
  unsigned int v0; // r6@1
  int v1; // r5@1
  int v2; // r1@1
  int v3; // r0@4
  __int16 v4; // r4@12
  int v6; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = (unsigned __int8)sub_8102BF8(0, 2 - v200002E);
  v2 = (unsigned __int8)sub_8102BF8(1u, 2 - v2000030);
  if ( v1 == v2 )
  {
    while ( 1 )
    {
      v3 = (unsigned __int8)sub_8102BF8(2u, 2 - v0);
      if ( v1 != v3 && (v1 || v3 != 1) && (v1 != 1 || v3) )
        break;
      v0 = ((v0 << 16) + 0x10000) >> 16;
    }
  }
  else if ( sub_8103764(v1, v2) << 24 )
  {
    if ( v2000004 & 0x80 )
    {
      while ( 1 )
      {
        v4 = v0;
        if ( v1 == (unsigned __int8)sub_8102BF8(2u, 2 - v0) )
          break;
        v0 = ((signed __int16)v0 + 1) & 0xFFFF;
        if ( (signed __int16)(v4 + 1) > 4 )
          goto _081038DC;
      }
    }
    else
    {
_081038DC:
      LOWORD(v0) = 0;
      while ( v1 == (unsigned __int8)sub_8102BF8(2u, 2 - v0) )
        v0 = ((signed __int16)v0 + 1) & 0xFFFF;
    }
  }
  v2000032 = v0;
  return v6;
}
