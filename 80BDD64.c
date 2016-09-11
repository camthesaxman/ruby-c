int GabbyAndTySetScriptVarsToFieldObjectLocalIds()
{
  unsigned int v0; // r0@1
  signed __int16 v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)GabbyAndTyGetBattleNum() - 1;
  if ( v0 <= 7 )
  {
    switch ( v0 )
    {
      case 0u:
        v202E8CC = 14;
        v1 = 13;
        goto _080BDE3A;
      case 1u:
        v202E8CC = 5;
        v1 = 6;
        goto _080BDE3A;
      case 2u:
        v202E8CC = 18;
        v1 = 17;
        goto _080BDE3A;
      case 3u:
        v202E8CC = 21;
        v1 = 22;
        goto _080BDE3A;
      case 4u:
        v202E8CC = 8;
        v1 = 9;
        goto _080BDE3A;
      case 5u:
        v202E8CC = 19;
        v1 = 20;
        goto _080BDE3A;
      case 6u:
        v202E8CC = 23;
        v1 = 24;
        goto _080BDE3A;
      case 7u:
        v202E8CC = 10;
        v1 = 11;
_080BDE3A:
        v202E8CE = v1;
        break;
      default:
        return v3;
    }
  }
  return v3;
}
