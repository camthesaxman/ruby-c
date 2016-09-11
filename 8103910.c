int sub_8103910()
{
  int v0; // r7@4
  unsigned __int8 v1; // r0@4
  int i; // r5@5
  unsigned int v3; // r6@7
  unsigned int v4; // r5@10
  signed int v5; // r8@10
  unsigned int v6; // r5@11
  int v7; // r7@11
  int v8; // r6@11
  int v9; // r4@11
  signed int v10; // r0@15
  unsigned int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+20h] [bp-4h]@0

  v12 = 0;
  if ( v2000036 )
  {
    if ( v2000034 == v2000036 )
    {
      if ( v2000004 & 0x80 )
      {
        v0 = (unsigned __int8)sub_8102BF8(0, v2000034 - v200002E);
        v1 = sub_8102BF8(1u, v2000036 - v2000030);
        if ( sub_8103764(v0, v1) << 24 )
        {
          for ( i = 0; ; i = (i + 1) & 0xFFFF )
          {
            v3 = i << 16;
            i = (signed __int16)i;
            if ( (signed __int16)i > 4 )
              break;
            if ( v0 == (unsigned __int8)sub_8102BF8(2u, v2000036 - i) )
            {
              v12 = v3 >> 16;
              break;
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v4 = 1;
    v5 = 0;
    while ( 1 )
    {
      v6 = v4 << 16;
      v7 = (unsigned __int8)sub_8102BF8(0, HIWORD(v6) - v200002E);
      v8 = (unsigned __int8)sub_8102BF8(1u, HIWORD(v6) - v2000030);
      v9 = (unsigned __int8)sub_8102BF8(2u, HIWORD(v6) - v12);
      if ( !(sub_81037BC(v7, v8, v9) << 24) && (!(sub_810378C(v7, v8, v9) << 24) || !(v2000004 & 0x80)) )
        break;
      v10 = v6 + 0x10000;
      v4 = (v6 + 0x10000) >> 16;
      if ( v10 >> 16 > 3 )
        goto _08103A46;
    }
    v5 = 1;
_08103A46:
    if ( !v5 )
      break;
    v12 = ((v12 << 16) + 0x10000) >> 16;
  }
  v2000032 = v12;
  return v13;
}
