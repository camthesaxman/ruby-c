int __fastcall sub_80AE770(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r2@1
  signed int v3; // r0@3
  int v4; // r2@3
  int v5; // r5@3
  int v6; // r4@3
  _BYTE *v7; // r1@3
  _BYTE *v8; // r0@5
  int v9; // r0@7
  int v10; // r3@7

  v2 = a1;
  if ( a2 <= 4u )
  {
    switch ( a2 )
    {
      case 0u:
        v3 = 33785200;
        v4 = v2 << 6;
        v5 = *(_BYTE *)(v4 + 33785238);
        v6 = *(_BYTE *)(v4 + 33785242);
        v7 = (_BYTE *)(v4 + 33785239);
        goto _080AE80E;
      case 1u:
        v3 = 33785200;
        v4 = v2 << 6;
        v5 = *(_BYTE *)(v4 + 33785239);
        v6 = *(_BYTE *)(v4 + 33785238);
        v7 = (_BYTE *)(v4 + 33785240);
        goto _080AE80E;
      case 2u:
        v4 = a1 << 6;
        v8 = (_BYTE *)(v4 + 33785240);
        goto _080AE7EA;
      case 3u:
        v4 = a1 << 6;
        v8 = (_BYTE *)(v4 + 33785241);
_080AE7EA:
        v5 = *v8;
        v9 = (int)(v8 - 1);
        v6 = *(_BYTE *)v9;
        v10 = *(_BYTE *)(v9 + 2);
        v3 = 33785200;
        return (v5 + ((v6 + v10 + *(_BYTE *)(v4 + v3 + 43)) >> 1)) & 0xFFFF;
      default:
        break;
    }
  }
  v3 = 33785200;
  v4 = v2 << 6;
  v5 = *(_BYTE *)(v4 + 33785242);
  v6 = *(_BYTE *)(v4 + 33785241);
  v7 = (_BYTE *)(v4 + 33785238);
_080AE80E:
  v10 = *v7;
  return (v5 + ((v6 + v10 + *(_BYTE *)(v4 + v3 + 43)) >> 1)) & 0xFFFF;
}
