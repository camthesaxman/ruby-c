int sub_80FB600()
{
  int v0; // r7@1
  int v1; // r8@1
  unsigned int v2; // r0@1
  int v3; // r0@7
  int v4; // r2@7
  _BYTE *v5; // r5@7
  signed int v6; // r4@7
  int v7; // r1@7
  signed int v8; // r4@11
  int v9; // r1@11
  int v10; // r2@15
  unsigned __int8 v12; // [sp+0h] [bp-28h]@1
  _BYTE v13[3]; // [sp+1h] [bp-27h]@1
  char v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+24h] [bp-4h]@15

  LOWORD(v0) = 0;
  LOWORD(v1) = 0;
  v2 = (unsigned __int8)sub_810D9EC(&v12, v13, &v13[1], &v14);
  if ( v2 > 4 )
  {
def_80FB63A:
    v3 = get_mapheader_by_bank_and_number(v12, (unsigned __int8)v13[0]);
    v4 = v20388CC;
    *(_WORD *)(v20388CC + 20) = *(_BYTE *)(v3 + 20);
    v5 = &gRegionMapLocations[8 * *(_WORD *)(v4 + 20)];
    v6 = v5[2];
    v7 = **(_DWORD **)v3 / v6 & 0xFFFF;
    if ( !v7 )
      v7 = 1;
    LOWORD(v1) = *(signed __int16 *)&v13[1] / v7;
    if ( (*(signed __int16 *)&v13[1] / v7 & 0xFFFFu) >= v6 )
      v1 = (v6 - 1) & 0xFFFF;
    v8 = v5[3];
    v9 = *(_DWORD *)(*(_DWORD *)v3 + 4) / v8 & 0xFFFF;
    if ( !v9 )
      v9 = 1;
    LOWORD(v0) = *(signed __int16 *)&v14 / v9;
    if ( (*(signed __int16 *)&v14 / v9 & 0xFFFFu) >= v8 )
      v0 = (v8 - 1) & 0xFFFF;
  }
  else
  {
    switch ( v2 )
    {
      case 1u:
        *(_WORD *)(v20388CC + 20) = 8;
        break;
      case 2u:
        *(_WORD *)(v20388CC + 20) = 12;
        break;
      case 3u:
        *(_WORD *)(v20388CC + 20) = 39;
        break;
      case 4u:
        *(_WORD *)(v20388CC + 20) = 46;
        break;
      default:
        goto def_80FB63A;
    }
  }
  *(_BYTE *)(v20388CC + 127) = 0;
  v10 = v20388CC;
  *(_WORD *)(v10 + 84) = gRegionMapLocations[8 * *(_WORD *)(v10 + 20)] + (_WORD)v1 + 1;
  *(_WORD *)(v10 + 86) = v0 + gRegionMapLocations[8 * *(_WORD *)(v10 + 20) + 1] + 2;
  return v15;
}
