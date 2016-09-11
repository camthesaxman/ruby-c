int __fastcall sub_8084984(__int16 a1, __int16 a2, unsigned __int8 a3)
{
  int v3; // r1@1
  unsigned int v4; // r9@1
  int v5; // r6@1
  unsigned int v6; // r5@1
  int v7; // r4@2
  unsigned __int8 v8; // r0@3
  int result; // r0@6
  __int16 v10; // [sp+0h] [bp-28h]@1
  __int16 v11; // [sp+4h] [bp-24h]@1

  v10 = a1;
  v11 = a2;
  v3 = 3 * a3;
  v4 = gUnknown_0839DC00[v3 + 1];
  v5 = gUnknown_0839DC00[v3 + 2];
  v6 = gUnknown_0839DC00[3 * a3];
  if ( v6 > v4 )
  {
_08084A2E:
    result = (v5 + 1) & 0xFFFF;
  }
  else
  {
    while ( 1 )
    {
      v7 = 0;
      if ( *v202E828 > 0 )
        break;
_08084A24:
      v6 = (v6 + 1) & 0xFFFF;
      if ( v6 > v4 )
        goto _08084A2E;
    }
    while ( 1 )
    {
      v8 = MapGridGetMetatileBehaviorAt(v7 + 7, v6 + 7);
      if ( (unsigned __int8)sub_805759C(v8) == 1 )
      {
        v5 = (v5 + 1) & 0xFFFF;
        if ( v10 == v7 && v11 == v6 )
          break;
      }
      v7 = (v7 + 1) & 0xFFFF;
      if ( v7 >= *v202E828 )
        goto _08084A24;
    }
    result = v5;
  }
  return result;
}
