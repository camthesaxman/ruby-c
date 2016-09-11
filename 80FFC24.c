signed int __fastcall sub_80FFC24(int a1, int a2)
{
  int v2; // r10@1
  int *v3; // r0@1
  unsigned int v4; // r0@1
  int *v5; // r2@1
  int v6; // r6@3
  unsigned int v7; // r7@4
  int v8; // r9@5
  int v9; // r8@6
  __int16 v10; // r6@6
  int v11; // r4@6
  __int16 v12; // r5@6
  int v13; // r4@8
  int v14; // r6@13
  int v15; // r9@15
  unsigned int v16; // r7@15
  int v17; // r8@17
  __int16 v18; // r6@17
  int v19; // r4@17
  __int16 v20; // r5@17
  int v21; // r9@23
  unsigned int v22; // r7@23
  int v23; // r8@25
  __int16 v24; // r6@25
  int v25; // r4@25
  __int16 v26; // r5@25
  int v27; // r4@28
  unsigned int v28; // r6@32
  int v29; // r9@34
  unsigned int v30; // r7@33
  int *v31; // r8@34
  int v32; // r4@35
  unsigned __int8 v33; // r0@35
  __int16 v34; // r9@40
  unsigned int v35; // r7@40
  int v36; // r5@41
  unsigned __int8 v37; // r4@41
  signed int result; // r0@43
  int v39; // [sp+0h] [bp-44h]@1
  unsigned int v40; // [sp+4h] [bp-40h]@1
  unsigned int v41; // [sp+8h] [bp-3Ch]@1
  int v42; // [sp+Ch] [bp-38h]@5
  int v43; // [sp+10h] [bp-34h]@14
  int v44; // [sp+14h] [bp-30h]@4
  int v45; // [sp+14h] [bp-30h]@15
  int v46; // [sp+20h] [bp-24h]@16
  int v47; // [sp+20h] [bp-24h]@24

  v39 = a2;
  a1 = (unsigned __int8)a1;
  v2 = a1;
  v3 = &dword_3004B20[10 * (unsigned __int8)a1];
  v40 = *((_BYTE *)v3 + 20);
  v41 = *((_BYTE *)v3 + 18);
  v4 = *(_BYTE *)(a2 + 17);
  v5 = dword_3004B20;
  if ( v4 > 4 )
  {
def_80FFC5E:
    result = 1;
  }
  else
  {
    switch ( v4 )
    {
      case 0u:
      case 1u:
        v6 = 0;
        if ( v40 <= 0 )
          goto def_80FFC5E;
        while ( 1 )
        {
          v7 = 0;
          v44 = v6 + 1;
          if ( v41 > 0 )
            break;
_080FFD56:
          v6 = (unsigned __int8)v44;
          if ( (unsigned __int8)v44 >= v40 )
            goto def_80FFC5E;
        }
        v42 = (HIWORD(dword_3004B20[10 * v2 + 2]) - v6) << 16;
        v8 = (signed __int16)(HIWORD(dword_3004B20[10 * v2 + 2]) - v6);
        while ( 1 )
        {
          v9 = (LOWORD(dword_3004B20[10 * v2 + 2]) + v7) << 16;
          v10 = LOWORD(dword_3004B20[10 * v2 + 2]) + v7;
          v11 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v10, v8);
          v12 = GetBehaviorByMetatileId(*(_WORD *)(2 * ((v40 - v44) * v41 + v7) + *(_DWORD *)(v39 + 28)) + 512) & 0xF000;
          if ( !(sub_80FFBDC(v11, (_BYTE *)v39) << 24) )
            goto _080FFFF4;
          if ( !(sub_80FFB94(v2, v10, v8, v12) << 24) )
            goto _080FFFF4;
          v13 = (unsigned __int8)GetFieldObjectIdByXYZ(HIWORD(v9), HIWORD(v42), 0);
          if ( v13 )
          {
            if ( v13 != 16 )
              goto _080FFFF4;
          }
          v7 = (v7 + 1) & 0xFF;
          if ( v7 >= v41 )
            goto _080FFD56;
        }
      case 2u:
        v14 = 0;
        if ( (signed int)(v40 - 1) <= 0 )
          goto _080FFE54;
        v43 = 10 * v2;
        do
        {
          v15 = (HIWORD(v5[v43 + 2]) - v14) & 0xFFFF;
          v16 = 0;
          v45 = v14 + 1;
          if ( v41 > 0 )
          {
            v46 = (HIWORD(v5[10 * v2 + 2]) - v14) << 16;
            do
            {
              v17 = (LOWORD(v5[10 * v2 + 2]) + v16) << 16;
              v18 = LOWORD(v5[v43 + 2]) + v16;
              v19 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v18, (signed __int16)v15);
              v20 = GetBehaviorByMetatileId(*(_WORD *)(2 * ((v40 - v45) * v41 + v16) + *(_DWORD *)(v39 + 28)) + 512) & 0xF000;
              if ( !(sub_805729C(v19) << 24) && !(sub_80FFB6C(v19, v20) << 24) )
                goto _080FFFF4;
              if ( !(sub_80FFB94(v2, v18, SHIWORD(v46), v20) << 24)
                || (unsigned __int8)GetFieldObjectIdByXYZ(HIWORD(v17), HIWORD(v46), 0) != 16 )
              {
                goto _080FFFF4;
              }
              v16 = (v16 + 1) & 0xFF;
              v5 = dword_3004B20;
            }
            while ( v16 < v41 );
          }
          v14 = (unsigned __int8)v45;
        }
        while ( (unsigned __int8)v45 < (signed int)(v40 - 1) );
_080FFE54:
        v21 = (HIWORD(v5[10 * v2 + 2]) - v40 + 1) & 0xFFFF;
        v22 = 0;
        if ( v41 <= 0 )
          goto def_80FFC5E;
        v47 = (HIWORD(v5[10 * v2 + 2]) - v40 + 1) << 16;
        while ( 1 )
        {
          v23 = (LOWORD(dword_3004B20[10 * v2 + 2]) + v22) << 16;
          v24 = LOWORD(dword_3004B20[10 * v2 + 2]) + v22;
          v25 = (unsigned __int8)MapGridGetMetatileBehaviorAt(v24, (signed __int16)v21);
          v26 = GetBehaviorByMetatileId(*(_WORD *)(2 * v22 + *(_DWORD *)(v39 + 28)) + 512) & 0xF000;
          if ( !(sub_805729C(v25) << 24) && !(sub_80572B0(v25) << 24) )
            goto _080FFFF4;
          if ( !(sub_80FFB94(v2, v24, SHIWORD(v47), v26) << 24) )
            goto _080FFFF4;
          v27 = (unsigned __int8)GetFieldObjectIdByXYZ(HIWORD(v23), HIWORD(v47), 0);
          if ( v27 )
          {
            if ( v27 != 16 )
              goto _080FFFF4;
          }
          v22 = (v22 + 1) & 0xFF;
          if ( v22 >= v41 )
            goto def_80FFC5E;
        }
      case 3u:
        v28 = 0;
        if ( v40 <= 0 )
          goto def_80FFC5E;
        while ( 1 )
        {
          v30 = 0;
          if ( v41 > 0 )
            break;
_080FFF8C:
          v28 = (v28 + 1) & 0xFF;
          if ( v28 >= v40 )
            goto def_80FFC5E;
        }
        v31 = &dword_3004B20[10 * v2];
        v29 = (*((_WORD *)v31 + 5) - v28) & 0xFFFF;
        while ( 1 )
        {
          v32 = (signed __int16)(*((_WORD *)v31 + 4) + v30);
          v33 = MapGridGetMetatileBehaviorAt(v32, (signed __int16)v29);
          if ( !(sub_80572B0(v33) << 24) || MapGridGetMetatileIdAt(v32, (signed __int16)v29 + 1) == 652 )
            goto _080FFFF4;
          v30 = (v30 + 1) & 0xFF;
          if ( v30 >= v41 )
            goto _080FFF8C;
        }
      case 4u:
        v34 = HIWORD(dword_3004B20[10 * v2 + 2]);
        v35 = 0;
        if ( v41 <= 0 )
          goto def_80FFC5E;
        break;
      default:
        goto def_80FFC5E;
    }
    while ( 1 )
    {
      v36 = (LOWORD(dword_3004B20[10 * v2 + 2]) + v35) & 0xFFFF;
      v37 = MapGridGetMetatileBehaviorAt((signed __int16)(LOWORD(dword_3004B20[10 * v2 + 2]) + v35), v34);
      if ( (*(_BYTE *)(v39 + 18) == 5 || !(sub_80572D8(v37) << 24)) && !(sub_80572EC(v37) << 24) )
        break;
      if ( (unsigned __int8)GetFieldObjectIdByXYZ(v36, v34, 0) != 16 )
        break;
      v35 = (v35 + 1) & 0xFF;
      if ( v35 >= v41 )
        goto def_80FFC5E;
    }
_080FFFF4:
    result = 0;
  }
  return result;
}
