int sub_80FB32C()
{
  unsigned int v0; // r0@4
  int v1; // r0@6
  signed int v2; // r2@6
  signed int v3; // r8@6
  unsigned int v4; // r6@6
  unsigned int v5; // r3@6
  int v6; // r2@8
  int v7; // r0@8
  _WORD *v8; // r0@8
  int v9; // r2@9
  int v10; // r0@9
  _WORD *v11; // r0@9
  int v12; // r1@10
  signed int v13; // r4@11
  int v14; // r2@11
  _WORD *v15; // r0@13
  unsigned int v16; // r9@14
  signed int v17; // r5@14
  char *v18; // r10@14
  signed int v19; // r7@14
  unsigned int v20; // r1@14
  int v21; // r0@16
  signed int v22; // r4@18
  unsigned int v23; // r1@18
  unsigned int v24; // r3@20
  int v25; // r2@45
  int v27; // [sp+20h] [bp-4h]@0

  if ( v2025738 != 25 || ((v2025739 - 41) & 0xFFu) > 2 )
  {
    v0 = (unsigned __int8)get_map_light_level_by_bank_and_number(v2025738, v2025739) - 1;
    if ( v0 > 8 )
    {
def_80FB37A:
      v1 = v20388CC;
      *(_WORD *)(v20388CC + 20) = v202E83C;
      *(_BYTE *)(v1 + 127) = 0;
      v2 = *v202E828;
      v3 = *(_WORD *)(v202E828 + 4);
      v4 = v2025734;
      v5 = v2025736;
      if ( *(_WORD *)(v20388CC + 20) == 69 )
        *(_BYTE *)(v20388CC + 127) = 1;
    }
    else
    {
      switch ( v0 )
      {
        default:
          goto def_80FB37A;
        case 3u:
        case 6u:
          v6 = get_mapheader_by_bank_and_number(v2025758 & 0xFFFF, v2025759 & 0xFFFF);
          v7 = v20388CC;
          *(_WORD *)(v20388CC + 20) = *(_BYTE *)(v6 + 20);
          *(_BYTE *)(v7 + 127) = 1;
          v8 = *(_WORD **)v6;
          v2 = **(_WORD **)v6;
          v3 = v8[2];
          v4 = v202575C;
          v5 = v202575E;
          break;
        case 8u:
          v9 = get_mapheader_by_bank_and_number(v2025748 & 0xFFFF, v2025749 & 0xFFFF);
          v10 = v20388CC;
          *(_WORD *)(v20388CC + 20) = *(_BYTE *)(v9 + 20);
          *(_BYTE *)(v10 + 127) = 1;
          v11 = *(_WORD **)v9;
          v2 = **(_WORD **)v9;
          v3 = v11[2];
          v4 = v202574C;
          v5 = v202574E;
          break;
        case 7u:
          v12 = v202E83C;
          *(_WORD *)(v20388CC + 20) = v202E83C;
          if ( v12 == 87 )
          {
            v13 = 33707848;
            v14 = get_mapheader_by_bank_and_number(v2025748 & 0xFFFF, v2025749 & 0xFFFF);
            *(_WORD *)(v20388CC + 20) = *(_BYTE *)(v14 + 20);
          }
          else
          {
            v13 = 33707864;
            v14 = get_mapheader_by_bank_and_number(v2025758 & 0xFFFF, v2025759 & 0xFFFF);
          }
          *(_BYTE *)(v20388CC + 127) = 0;
          v15 = *(_WORD **)v14;
          v2 = **(_WORD **)v14;
          v3 = v15[2];
          v4 = *(_WORD *)(v13 + 4);
          v5 = *(_WORD *)(v13 + 6);
          break;
      }
    }
    v16 = v4;
    v17 = *(_WORD *)(v20388CC + 20);
    v18 = &gRegionMapLocations[8 * v17];
    v19 = (unsigned __int8)v18[2];
    v20 = v2 / v19 & 0xFFFF;
    if ( !v20 )
      v20 = 1;
    v21 = v4 / v20;
    LOWORD(v4) = v4 / v20;
    if ( (unsigned __int16)v21 >= (unsigned int)v19 )
      v4 = (v19 - 1) & 0xFFFF;
    v22 = (unsigned __int8)v18[3];
    v23 = v3 / v22 & 0xFFFF;
    if ( !v23 )
      v23 = 1;
    v24 = v5 / v23 & 0xFFFF;
    if ( v24 >= v22 )
      v24 = (v22 - 1) & 0xFFFF;
    if ( v17 == 36 )
    {
      v4 = 0;
      if ( v16 > 0xE )
        v4 = 1;
      if ( v16 > 0x1C )
        v4 = (v4 + 1) & 0xFFFF;
      if ( v16 > 0x36 )
        v4 = (v4 + 1) & 0xFFFF;
    }
    else if ( v17 > 36 )
    {
      if ( v17 == 41 || v17 == 51 )
      {
        v4 = 0;
        if ( v2025734 > 32 )
          v4 = 1;
        if ( v2025734 > 51 )
          v4 = (v4 + 1) & 0xFFFF;
        v24 = 0;
        if ( v2025736 > 37 )
          v24 = 1;
        if ( v2025736 > 56 )
          v24 = (v24 + 1) & 0xFFFF;
      }
    }
    else if ( v17 == 29 && v24 )
    {
      LOWORD(v4) = 0;
    }
    v25 = v20388CC;
    *(_WORD *)(v20388CC + 84) = v4 + gRegionMapLocations[8 * *(_WORD *)(v20388CC + 20)] + 1;
    *(_WORD *)(v25 + 86) = v24 + gRegionMapLocations[8 * *(_WORD *)(v25 + 20) + 1] + 2;
  }
  else
  {
    sub_80FB600();
  }
  return v27;
}
