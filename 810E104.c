int __fastcall sub_810E104(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r2@1
  unsigned int v3; // r7@1
  unsigned int v4; // r0@1
  char *v5; // r1@3
  signed __int16 v6; // r0@3
  char *v7; // r1@6
  signed __int16 v8; // r0@6
  unsigned int v9; // r6@13
  int v10; // r9@14
  __int16 v11; // r8^2@14
  __int16 *v12; // r5@15
  char *v13; // r4@15
  __int16 v15; // [sp+0h] [bp-2Ch]@3
  __int16 v16; // [sp+2h] [bp-2Ah]@3
  char v17; // [sp+8h] [bp-24h]@3
  int v18; // [sp+28h] [bp-4h]@16

  v2 = a2;
  v3 = 0;
  v4 = a1 - 1;
  if ( v4 <= 7 )
  {
    switch ( v4 )
    {
      case 0u:
        v3 = 2;
        v15 = 1;
        v16 = 7;
        v5 = &v17;
        v6 = 104;
        goto _0810E1A0;
      case 1u:
        v3 = 2;
        v15 = 1;
        v16 = 7;
        v5 = &v17;
        v6 = 78;
        goto _0810E1A0;
      case 2u:
        v3 = 2;
        v15 = 1;
        v16 = 7;
        v5 = &v17;
        v6 = 91;
        goto _0810E1A0;
      case 3u:
        v3 = 1;
        v15 = 7;
        v7 = &v17;
        v8 = 39;
        goto _0810E1CA;
      case 4u:
        v3 = 2;
        v15 = 1;
        v16 = 7;
        v5 = &v17;
        v6 = 52;
_0810E1A0:
        *(_WORD *)v5 = v6;
        *((_WORD *)v5 + 1) = v6;
        break;
      case 5u:
        v3 = 1;
        v15 = 1;
        v7 = &v17;
        v8 = 65;
        goto _0810E1CA;
      case 6u:
        v3 = 1;
        v15 = 7;
        v7 = &v17;
        v8 = 13;
        goto _0810E1CA;
      case 7u:
        v3 = 1;
        v15 = 1;
        v7 = &v17;
        v8 = 26;
_0810E1CA:
        *(_WORD *)v7 = v8;
        break;
      default:
        break;
    }
  }
  v9 = 0;
  if ( v3 > 0 )
  {
    v10 = (v2 | 0xC00) << 16;
    v11 = (v2 + 8) | 0xC00;
    do
    {
      v12 = &v15 + v9;
      v13 = &v17 + 2 * v9;
      MapGridSetMetatileIdAt((unsigned __int16)*v12 + 7, *(_WORD *)v13 + 7, SHIWORD(v10));
      MapGridSetMetatileIdAt((unsigned __int16)*v12 + 7, *(_WORD *)v13 + 8, v11);
      v9 = (v9 + 1) & 0xFF;
    }
    while ( v9 < v3 );
  }
  DrawWholeMapView();
  return v18;
}
