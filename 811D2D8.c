int __fastcall sub_811D2D8(int a1)
{
  int v1; // r7@1
  unsigned int v2; // r8@1
  int v3; // r12@1
  unsigned int v4; // r0@2
  signed int v5; // r3@2
  int v6; // r4@2
  int v7; // r0@13

  v1 = a1;
  v200C000 = 0;
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = (unsigned __int16)word_3004DE0[v200C02A];
    v5 = v4 >> 8;
    v6 = (unsigned __int8)v4;
    if ( *(_WORD *)(v1 + 12) )
    {
      if ( (unsigned __int8)v4 > v200C028 )
        v6 = v200C028;
      if ( v6 << 16 <= (signed int)(v4 >> 8 << 16) )
        LOWORD(v6) = (unsigned __int16)word_3004DE0[v200C02A] >> 8;
    }
    else
    {
      if ( v5 < v200C028 )
        v5 = v200C028;
      if ( v5 << 16 > (unsigned __int8)v4 << 16 )
        v5 = (unsigned __int8)v4;
    }
    word_3004DE0[v200C02A] = v6 | (v5 << 16 >> 8);
    if ( v3 )
      break;
    v3 = (unsigned __int8)sub_811D978(33603620, 1, 1);
    v7 = (v2 << 16) + 0x10000;
    v2 = (unsigned int)v7 >> 16;
    if ( v7 >> 16 > 15 )
      goto _0811D392;
  }
  ++*(_WORD *)(v1 + 8);
_0811D392:
  ++v200C000;
  return 0;
}
