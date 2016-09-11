int sub_80E6424()
{
  signed __int16 v0; // r2@3
  signed __int16 v1; // r0@3
  signed __int16 v2; // r0@4
  int v3; // r0@12
  int v4; // r0@12
  int v5; // r0@12
  int v6; // r0@12
  int v7; // r0@12
  int v9; // [sp+0h] [bp-4h]@0

  v2001009 = gUnknown_083DB6A4[v2001008];
  if ( v2001009 <= 5u )
  {
    switch ( v2001009 )
    {
      case 4u:
        v0 = 4;
        v200100A = 4;
        v2001083 = 2;
        v2001084 = 2;
        v1 = 5;
        goto _080E64D0;
      case 5u:
        v200100A = 4;
        v2001083 = 1;
        v2001084 = 4;
        v2001088 = 16;
        v2 = 2;
        goto _080E6510;
      case 0u:
        v200100A = 6;
        v2001083 = 2;
        v0 = 3;
        v2001084 = 3;
        goto _080E64CE;
      case 1u:
        v0 = 0;
        v200100A = 9;
        v2001083 = 2;
        v2001084 = 5;
_080E64CE:
        v1 = 4;
_080E64D0:
        v2001088 = v1;
        v200108A = v0;
        break;
      case 2u:
        v200100A = 1;
        v2001083 = 1;
        v2001084 = 1;
        v2001088 = 16;
        v2 = 4;
        goto _080E6510;
      case 3u:
        v200100A = 2;
        v2001083 = 2;
        v2001084 = 1;
        v2001088 = 5;
        v2 = 3;
_080E6510:
        v200108A = v2;
        break;
      default:
        break;
    }
  }
  v2001086 = 0;
  v2001085 = 0;
  v2001087 = 0;
  v2001026 = 0;
  v20011BA = 0;
  v20011BE = 2;
  v3 = sub_80E6554();
  v4 = sub_80EAECC(v3);
  v5 = sub_80EB040(v4);
  v6 = sub_80E7E50(v5);
  v7 = sub_80E6630(v6);
  sub_80E6690(v7);
  return v9;
}
