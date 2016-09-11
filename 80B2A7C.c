signed int __fastcall sub_80B2A7C(unsigned __int8 a1)
{
  int v1; // r9@1
  unsigned int v2; // r7@1
  signed int v3; // r6@1
  signed int result; // r0@6
  char v5; // r0@9
  int v6; // r4@15
  signed int v7; // r6@15

  v1 = a1;
  v2 = (unsigned __int16)Random() % 3u & 0xFF;
  v3 = 0;
  if ( v2038690 )
  {
    do
      ++v3;
    while ( v3 <= 2 && *(_BYTE *)(v3 + 33785488) );
  }
  if ( v1 != 255 || v3 == v2038695 )
  {
    if ( v203869C <= 4u )
    {
      switch ( v203869C )
      {
        case 1u:
          v5 = v2 + 3;
          goto _080B2B12;
        case 2u:
          v5 = v2 + 6;
          goto _080B2B12;
        case 3u:
          v5 = v2 + 9;
          goto _080B2B12;
        case 4u:
          v5 = v2 + 12;
_080B2B12:
          LOBYTE(v2) = v5;
          break;
        default:
          break;
      }
    }
    if ( v1 == 254 )
    {
      v2015DE0 = *(_DWORD *)((v3 << 6) + 0x20385A8);
      v2015DE4 = *(_DWORD *)((v3 << 6) + 0x20385AC);
      v2015DE8 = *(_WORD *)((v3 << 6) + 0x2038570);
      StringCopy((_BYTE *)0x2015DEB, (_BYTE *)((v3 << 6) + 33785202));
      if ( v203869A & 1 )
        StringCopy((_BYTE *)0x2015DF6, &byte_3002978[28 * v3]);
      else
        StringCopy((_BYTE *)0x2015DF6, (_BYTE *)((v3 << 6) + 33785213));
      v2015DEA = v2;
    }
    else
    {
      v6 = 32 * sub_80B2C4C(v1, 1) & 0x1FFF;
      v7 = v3 << 6;
      *(_DWORD *)(v6 + 33719600) = *(_DWORD *)(v7 + 33785256);
      *(_WORD *)(v6 + 33719608) = *(_WORD *)(v7 + 33785200);
      *(_DWORD *)(v6 + 33719604) = *(_DWORD *)(v7 + 33785260);
      StringCopy((_BYTE *)(v6 + 33719611), (_BYTE *)(v7 + 33785202));
      StringCopy((_BYTE *)(v6 + 33719622), (_BYTE *)(v7 + 33785213));
      if ( v1 == 255 )
        *(_BYTE *)(v6 + 33719610) = v2;
      else
        *(_BYTE *)(v6 + 33719610) = v203869C;
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
