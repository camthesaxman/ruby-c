int __fastcall sub_80BA00C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  int *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r0@3
  __int16 v5; // r0@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 2u:
        v4 = sub_8047A1C();
        sub_8125E2C(v4);
        goto _080BA086;
      case 3u:
        if ( sub_8125E6C() << 24 )
        {
          sub_8047A34();
          ++*((_WORD *)v2 + 4);
          *((_WORD *)v2 + 5) = 0;
        }
        return v7;
      case 4u:
        v5 = *((_WORD *)v2 + 5) + 1;
        *((_WORD *)v2 + 5) = v5;
        if ( v5 <= 10 )
          return v7;
        sub_800832C();
        goto _080BA086;
      case 0u:
      case 1u:
_080BA086:
        ++*((_WORD *)v2 + 4);
        break;
      case 5u:
        if ( !gReceivedRemoteLinkPlayers )
          DestroyTask(v1);
        break;
      default:
        return v7;
    }
  }
  return v7;
}
