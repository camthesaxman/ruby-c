signed int sub_80FA940()
{
  unsigned int v0; // r0@1
  int v1; // r2@8
  _WORD *v2; // r0@8
  char v3; // r0@8
  __int16 v4; // r1@8
  int v5; // r0@8
  int v6; // r4@9
  int v7; // r0@12
  int v8; // r0@12

  v0 = *(_BYTE *)(v20388CC + 121);
  if ( v0 <= 7 )
  {
    switch ( v0 )
    {
      case 0u:
        LZ77UnCompVram(&gUnknown_083E5DA0, 100696064);
        goto _080FAAF4;
      case 1u:
        LZ77UnCompVram(&gUnknown_083E6B04, 100720640);
        goto _080FAAF4;
      case 2u:
        LoadPalette((int)&gUnknown_083E5D60, 112, 96);
        goto _080FAAF4;
      case 3u:
        LZ77UnCompWram(&gUnknown_083E5AF0, v20388CC + 384);
        goto _080FAAF4;
      case 4u:
        LZ77UnCompWram(&gUnknown_083E5B34, v20388CC + 640);
        goto _080FAAF4;
      case 5u:
        sub_80FB32C();
        v1 = v20388CC;
        v2 = (_WORD *)(v20388CC + 116);
        *v2 = *(_WORD *)(v20388CC + 84);
        *(_WORD *)(v1 + 118) = *(v2 - 15);
        v3 = sub_80FB758(*(_WORD *)(v1 + 20));
        *(_BYTE *)(v20388CC + 22) = v3;
        v4 = sub_80FB9C0(*(_WORD *)(v20388CC + 20));
        v5 = v20388CC;
        *(_WORD *)(v20388CC + 20) = v4;
        sub_80FBFB4(v5, *(_WORD *)(v5 + 20), 16);
        goto _080FAAF4;
      case 6u:
        v6 = v20388CC;
        if ( *(_BYTE *)(v20388CC + 120) )
        {
          *(_WORD *)(v20388CC + 92) = 8 * *(_WORD *)(v20388CC + 84) - 52;
          *(_WORD *)(v6 + 94) = 8 * *(_WORD *)(v6 + 86) - 68;
          *(_WORD *)(v6 + 100) = *(_WORD *)(v6 + 84);
          *(_WORD *)(v6 + 102) = *(_WORD *)(v6 + 86);
          sub_80FB170(*(_WORD *)(v6 + 92), *(_WORD *)(v6 + 94), 56, 72);
        }
        else
        {
          sub_80FB170(0, 0, 0, 0);
        }
_080FAAF4:
        ++*(_BYTE *)(v20388CC + 121);
        return 1;
      case 7u:
        v7 = sub_80FBA18();
        sub_80FB260(v7);
        v8 = v20388CC;
        *(_DWORD *)(v20388CC + 28) = 0;
        *(_DWORD *)(v8 + 32) = 0;
        *(_BYTE *)(v8 + 122) = 0;
        *(_BYTE *)(v20388CC + 126) = 0;
        v400000C = -17270;
        ++*(_BYTE *)(v20388CC + 121);
        return 0;
      default:
        return 0;
    }
  }
  return 0;
}
