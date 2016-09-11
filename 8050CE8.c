signed int sub_8050CE8()
{
  unsigned int v0; // r0@1
  int v1; // r2@3
  int *v2; // r1@3
  int v3; // r0@3
  int v4; // r0@7
  int v5; // r1@12
  int v6; // r0@16

  v0 = *(_DWORD *)(dword_3004854 + 452);
  if ( v0 <= 6 )
  {
    switch ( v0 )
    {
      case 0u:
        sub_80084A4();
        v1 = dword_3004854;
        v2 = (int *)(dword_3004854 + 452);
        v3 = 1;
        goto _08050DF8;
      case 1u:
        if ( sub_8007ECC() << 24 )
        {
          ++*(_DWORD *)(dword_3004854 + 452);
          gUnknown_3001BB4 = 1;
        }
        return 0;
      case 2u:
        sub_8125E2C();
        v1 = dword_3004854;
        goto _08050DEE;
      case 3u:
        v4 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v4;
        if ( v4 == 10 )
        {
          sub_80084A4();
          ++*(_DWORD *)(dword_3004854 + 452);
        }
        return 0;
      case 4u:
        if ( sub_8007ECC() << 24 )
        {
          if ( sub_8125E6C() & 0xFF )
          {
            *(_DWORD *)(dword_3004854 + 452) = 5;
          }
          else
          {
            v5 = dword_3004854;
            *(_DWORD *)(dword_3004854 + 304) = 0;
            *(_DWORD *)(v5 + 452) = 3;
          }
        }
        return 0;
      case 5u:
        v1 = dword_3004854;
_08050DEE:
        v2 = (int *)(v1 + 452);
        v3 = *(_DWORD *)(v1 + 452) + 1;
_08050DF8:
        *v2 = v3;
        *(_DWORD *)(v1 + 304) = 0;
        return 0;
      case 6u:
        v6 = *(_DWORD *)(dword_3004854 + 304) + 1;
        *(_DWORD *)(dword_3004854 + 304) = v6;
        if ( v6 <= 5 )
          return 0;
        gUnknown_3001BB4 = 0;
        return 1;
      default:
        return 0;
    }
  }
  return 0;
}
