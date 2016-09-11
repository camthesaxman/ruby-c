int __fastcall sub_809D8BC(int a1, char a2, char a3, int a4, unsigned __int8 a5)
{
  _BYTE *v5; // r0@4
  int v7; // [sp+10h] [bp-4h]@0

  v202F390 |= 0x80u;
  v2018000 = a1;
  v2018008 = a5;
  v2018009 = a2;
  v201800A = a3;
  v2018004 = a4;
  v2018074 = 0;
  v2018079 = 4;
  v201807C = 0;
  v2018080 = 0;
  v201807B = 0;
  v201800E = a5 > 4u;
  if ( a5 <= 6u )
  {
    switch ( a5 )
    {
      case 0u:
      case 5u:
        v2018075 = 0;
        v2018076 = 3;
        v2018077 = 0;
        v2018078 = 0;
        v201807E = 1;
        v201807F = 7;
        break;
      case 4u:
        v2018075 = 0;
        v2018076 = 3;
        v2018077 = 0;
        v2018078 = 0;
        v201807E = 1;
        v201807F = 7;
        v5 = (_BYTE *)33652859;
        goto _0809D9D4;
      case 2u:
        v2018075 = 2;
        v2018076 = 3;
        v2018077 = 1;
        v2018078 = 1;
        v201807E = 3;
        v201807F = 0;
        v2018079 = 0;
        break;
      case 1u:
      case 6u:
        v2018075 = 2;
        v2018076 = 3;
        v2018077 = 1;
        v5 = (_BYTE *)33652856;
_0809D9D4:
        *v5 = 1;
        break;
      default:
        break;
    }
  }
  v201800B = v2018075;
  SetMainCallback2((int)sub_809DE44);
  return v7;
}
