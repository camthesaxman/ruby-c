int __fastcall sub_80C8AD0(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  unsigned int v3; // r0@1
  signed int v4; // r0@6
  const char *v5; // r1@6
  signed int v6; // r2@6
  int *v7; // r2@7
  __int16 v8; // r0@7
  int v10; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 > 0xB )
  {
def_80C8AF4:
    *((_WORD *)v2 + 4) = 0;
    SwitchTaskToFollowupFunc(v1);
  }
  else
  {
    switch ( v3 )
    {
      case 0u:
        if ( !(sub_8007ECC() << 24) )
          return v10;
        sub_80C857C((const char *)0x2038678, 8u);
        goto _080C8C4C;
      case 1u:
        if ( !(sub_80C85D8() << 24) )
          return v10;
        v4 = 33785464;
        v5 = (const char *)&gBlockRecvBuffer[64 * v203869B];
        v6 = 8;
        goto _080C8C48;
      case 2u:
      case 5u:
      case 8u:
      case 0xBu:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 5);
        *((_WORD *)v7 + 5) = v8 + 1;
        if ( v8 > 10 )
        {
          *((_WORD *)v7 + 5) = 0;
          ++*((_WORD *)v7 + 4);
        }
        return v10;
      case 3u:
        if ( !(sub_8007ECC() << 24) )
          return v10;
        sub_80C857C((const char *)0x2038680, 8u);
        goto _080C8C4C;
      case 4u:
        if ( !(sub_80C85D8() << 24) )
          return v10;
        v4 = 33785472;
        v5 = (const char *)&gBlockRecvBuffer[64 * v203869B];
        v6 = 8;
        goto _080C8C48;
      case 6u:
        if ( !(sub_8007ECC() << 24) )
          return v10;
        sub_80C857C((const char *)0x2038688, 8u);
        goto _080C8C4C;
      case 7u:
        if ( !(sub_80C85D8() << 24) )
          return v10;
        v4 = 33785480;
        v5 = (const char *)&gBlockRecvBuffer[64 * v203869B];
        v6 = 8;
        goto _080C8C48;
      case 9u:
        if ( !(sub_8007ECC() << 24) )
          return v10;
        sub_80C857C((const char *)0x2038690, 4u);
        goto _080C8C4C;
      case 0xAu:
        if ( sub_80C85D8() << 24 )
        {
          v4 = 33785488;
          v5 = (const char *)&gBlockRecvBuffer[64 * v203869B];
          v6 = 4;
_080C8C48:
          memcpy(v4, v5, v6);
_080C8C4C:
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
        }
        break;
      default:
        goto def_80C8AF4;
    }
  }
  return v10;
}
