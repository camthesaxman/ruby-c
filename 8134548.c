int sub_8134548()
{
  int v0; // r4@1
  signed int v1; // r5@1
  unsigned int v2; // r0@2
  __int16 v3; // r1@6
  signed int v4; // r0@12
  int v6; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = *(_BYTE *)(v1 + 33707002);
    if ( v2 > 6 )
    {
def_8134564:
      sub_813461C((unsigned __int8)v1);
      if ( !v0 )
        VarSet(0x4000u, 5);
    }
    else
    {
      switch ( v2 )
      {
        default:
          goto def_8134564;
        case 1u:
          sub_813461C((unsigned __int8)v1);
          v3 = 1;
          goto _081345CE;
        case 4u:
          v3 = 2;
          goto _081345CE;
        case 5u:
          v3 = 3;
          goto _081345CE;
        case 2u:
          v3 = 4;
_081345CE:
          VarSet(0x4000u, v3);
          v0 = (v0 + 1) & 0xFF;
          break;
        case 3u:
        case 6u:
          break;
      }
    }
    ++v1;
  }
  while ( v1 <= 1 );
  v4 = v20253FA;
  if ( v20253FA == 3 || v20253FA == 6 )
  {
    v4 = v20253FB;
    if ( v20253FB == 3 || v20253FB == 6 )
      v4 = VarSet(0x4000u, 5);
  }
  sub_8135C44(v4);
  return v6;
}
