int sub_810DCCC()
{
  int v0; // r5@1
  int v1; // r4@2
  int v2; // r6@2
  unsigned int v3; // r0@3
  __int16 v4; // r2@5
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 12;
  do
  {
    v1 = 7;
    v2 = v0 + 1;
    do
    {
      v3 = MapGridGetMetatileIdAt(v1, v0) - 538;
      if ( v3 <= 0x37 )
      {
        switch ( v3 )
        {
          case 6u:
            v4 = 560;
            goto _0810DEAC;
          case 7u:
            v4 = 561;
            goto _0810DEAC;
          case 0xEu:
            v4 = 568;
            goto _0810DEAC;
          case 0xFu:
            v4 = 569;
            goto _0810DEAC;
          case 0x16u:
            v4 = 544;
            goto _0810DEAC;
          case 0x17u:
            v4 = 545;
            goto _0810DEAC;
          case 0x1Eu:
            v4 = 3624;
            goto _0810DEAC;
          case 0x1Fu:
            v4 = 3625;
            goto _0810DEAC;
          case 8u:
            v4 = 562;
            goto _0810DEAC;
          case 9u:
            v4 = 563;
            goto _0810DEAC;
          case 0x10u:
            v4 = 570;
            goto _0810DEAC;
          case 0x11u:
            v4 = 571;
            goto _0810DEAC;
          case 0x18u:
            v4 = 546;
            goto _0810DEAC;
          case 0x19u:
            v4 = 547;
            goto _0810DEAC;
          case 0x20u:
            v4 = 3626;
            goto _0810DEAC;
          case 0x21u:
            v4 = 3627;
            goto _0810DEAC;
          case 0x26u:
            v4 = 3650;
            goto _0810DEAC;
          case 0x2Eu:
            v4 = 538;
            goto _0810DEAC;
          case 0x27u:
            v4 = 3651;
            goto _0810DEAC;
          case 0x2Fu:
            v4 = 538;
            goto _0810DEAC;
          case 0x28u:
            v4 = 3648;
            goto _0810DEAC;
          case 0u:
            if ( MapGridGetMetatileIdAt(v1, v0 - 1) == 576 )
              v4 = 3656;
            else
              v4 = 3657;
            goto _0810DEAC;
          case 0x29u:
            v4 = 3649;
            goto _0810DEAC;
          case 0x37u:
            v4 = 3664;
_0810DEAC:
            MapGridSetMetatileIdAt(v1, v0, v4);
            break;
          case 0x36u:
            MapGridSetMetatileIdAt(v1, v0, 593);
            break;
          default:
            break;
        }
      }
      ++v1;
    }
    while ( v1 <= 15 );
    ++v0;
  }
  while ( v2 <= 23 );
  return v6;
}
