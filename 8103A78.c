int sub_8103A78()
{
  int v0; // r6@4
  unsigned __int8 v1; // r0@4
  signed int v2; // r1@5
  int v3; // r3@7
  signed int v4; // r8@7
  int v5; // r5@8
  int v6; // r6@11
  int v7; // r5@11
  int v8; // r4@11
  int v9; // r6@15
  int v10; // r5@15
  int v11; // r4@15
  int v13; // [sp+14h] [bp-4h]@0

  sub_8103910();
  if ( v2000036 )
  {
    if ( v2000034 != v2000036 )
    {
      if ( v2000004 & 0x80 )
      {
        v0 = (unsigned __int8)sub_8102BF8(0, v2000034 - v200002E);
        v1 = sub_8102BF8(1u, v2000036 - v2000030);
        if ( sub_8103764(v0, v1) << 24 )
        {
          v2 = 1;
          if ( v2000034 == 1 )
            v2 = 3;
          LOWORD(v3) = 0;
          v4 = v2 << 16;
          while ( 1 )
          {
            v5 = (signed __int16)v3;
            if ( v0 == (unsigned __int8)sub_8102BF8(2u, HIWORD(v4) - (v3 + v2000032)) )
              break;
            v3 = (v5 + 1) & 0xFFFF;
            if ( (signed __int16)(v5 + 1) > 4 )
              goto _08103B22;
          }
          v2000032 += v5;
        }
      }
    }
  }
_08103B22:
  while ( 1 )
  {
    v6 = (unsigned __int8)sub_8102BF8(0, 1 - v200002E);
    v7 = (unsigned __int8)sub_8102BF8(1u, 2 - v2000030);
    v8 = (unsigned __int8)sub_8102BF8(2u, 3 - v2000032);
    if ( sub_81037BC(v6, v7, v8) << 24 || sub_810378C(v6, v7, v8) << 24 && v2000004 & 0x80 )
      break;
    ++v2000032;
  }
  while ( 1 )
  {
    v9 = (unsigned __int8)sub_8102BF8(0, 3 - v200002E);
    v10 = (unsigned __int8)sub_8102BF8(1u, 2 - v2000030);
    v11 = (unsigned __int8)sub_8102BF8(2u, 1 - v2000032);
    if ( sub_81037BC(v9, v10, v11) << 24 || sub_810378C(v9, v10, v11) << 24 && v2000004 & 0x80 )
      break;
    ++v2000032;
  }
  return v13;
}
