int __fastcall sub_80B97DC(unsigned __int8 a1)
{
  int v1; // r1@1
  int *v2; // r4@1
  unsigned int v3; // r1@1
  int v4; // r0@3
  __int16 v5; // r0@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = 10 * a1;
  v2 = &dword_3004B20[v1];
  v3 = LOWORD(dword_3004B20[v1 + 2]);
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v4 = sub_80B9A44(v2 + 3);
        memcpy(&gBlockSendBuffer, v4 + 200 * *((_WORD *)v2 + 8), 200);
        goto _080B9860;
      case 1u:
        if ( !(GetMultiplayerId() << 24) )
          sub_8007E9C(1);
        goto _080B9860;
      case 3u:
        v5 = *((_WORD *)v2 + 8) + 1;
        *((_WORD *)v2 + 8) = v5;
        if ( v5 == 24 )
_080B9860:
          ++*((_WORD *)v2 + 4);
        else
          *((_WORD *)v2 + 4) = 0;
        break;
      case 4u:
        if ( !LOBYTE(dword_3004B20[10 * *((_WORD *)v2 + 14) + 1]) )
          *v2 = (int)sub_80B9A1C;
        break;
      default:
        return v7;
    }
  }
  return v7;
}
