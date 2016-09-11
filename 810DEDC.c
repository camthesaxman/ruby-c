int sub_810DEDC()
{
  char *v0; // r4@1
  signed int v1; // r5@1
  int v2; // r5@3
  int v3; // r4@4
  int v4; // r6@4
  unsigned int v5; // r0@5
  __int16 v6; // r2@7
  int v8; // [sp+Ch] [bp-4h]@0

  v0 = gUnknown_083F8364;
  v1 = 2;
  do
  {
    MapGridSetMetatileIdAt((unsigned __int8)*v0, (unsigned __int8)v0[1], 518);
    v0 += 4;
    --v1;
  }
  while ( v1 >= 0 );
  v2 = 12;
  do
  {
    v3 = 7;
    v4 = v2 + 1;
    do
    {
      v5 = MapGridGetMetatileIdAt(v3, v2) - 544;
      if ( v5 <= 0x30 )
      {
        switch ( v5 )
        {
          case 0u:
            v6 = 560;
            goto _0810E03E;
          case 1u:
            v6 = 561;
            goto _0810E03E;
          case 8u:
            v6 = 568;
            goto _0810E03E;
          case 9u:
            v6 = 569;
            goto _0810E03E;
          case 2u:
            v6 = 562;
            goto _0810E03E;
          case 3u:
            v6 = 563;
            goto _0810E03E;
          case 0xAu:
            v6 = 570;
            goto _0810E03E;
          case 0xBu:
            v6 = 571;
            goto _0810E03E;
          case 0x20u:
            v6 = 3650;
            goto _0810E03E;
          case 0x21u:
            v6 = 3651;
            goto _0810E03E;
          case 0x28u:
          case 0x29u:
            v6 = 538;
_0810E03E:
            MapGridSetMetatileIdAt(v3, v2, v6);
            break;
          case 0x30u:
            MapGridSetMetatileIdAt(v3, v2, 593);
            break;
          default:
            break;
        }
      }
      ++v3;
    }
    while ( v3 <= 15 );
    ++v2;
  }
  while ( v4 <= 23 );
  return v8;
}
