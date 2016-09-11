unsigned int UpdateFastPaletteFade()
{
  unsigned int v1; // r0@4
  signed int v2; // r2@6
  unsigned int v3; // r10@6
  int v4; // r0@8
  unsigned int l; // r7@15
  int v6; // r1@16
  unsigned int v7; // r3@16
  signed int v8; // r12@16
  signed int v9; // r8@16
  int v10; // r1@16
  int v11; // r2@16
  int v12; // r5@16
  int v13; // r4@16
  unsigned int v14; // r6@16
  unsigned int v15; // r3@16
  unsigned int i; // r7@24
  int v17; // r1@25
  signed int v18; // r6@25
  int v19; // r5@25
  int v20; // r4@25
  unsigned int j; // r7@33
  int v22; // r1@34
  unsigned int v23; // r3@34
  signed int v24; // r12@34
  signed int v25; // r8@34
  int v26; // r1@34
  signed int v27; // r6@34
  int v28; // r5@34
  int v29; // r4@34
  unsigned int v30; // r3@34
  unsigned int k; // r7@42
  unsigned int v32; // r2@43
  int v33; // r5@43
  int v34; // r4@43
  unsigned int v35; // r6@43
  unsigned int v36; // r3@50
  unsigned int v37; // r5@52
  int v38; // r0@56
  int v39; // [sp+0h] [bp-28h]@64
  int v40; // [sp+4h] [bp-24h]@65

  if ( !(v202F38F & 0x80) )
    return 0;
  if ( !(IsSoftwarePaletteFadeFinishing() << 24) )
  {
    if ( v202F392 & 4 )
    {
      v2 = 256;
      v3 = 512;
    }
    else
    {
      v2 = 0;
      v3 = 256;
    }
    v4 = v202F390 & 0x3F;
    if ( v4 == 1 )
    {
      for ( i = v2; i < v3; i = (i + 1) & 0xFFFF )
      {
        v17 = *(_DWORD *)(2 * i + 0x202EEC8);
        v18 = (((v17 << 24) & 0x1FFFFFFFu) + 0x2000000) >> 24;
        v19 = ((unsigned int)(v17 << 22) >> 27) + 2;
        v20 = ((unsigned int)(v17 << 17) >> 27) + 2;
        if ( v18 > 31 )
          LOBYTE(v18) = 31;
        if ( (char)v19 > 31 )
          v19 = 31;
        if ( (char)v20 > 31 )
          v20 = 31;
        *(_WORD *)(2 * i + 0x202EEC8) = (char)v18 | (unsigned __int16)(v19 << 24 >> 19) | (v20 << 24 >> 14);
      }
    }
    else if ( v4 > 1 )
    {
      if ( v4 == 2 )
      {
        for ( j = v2; j < v3; j = (j + 1) & 0xFFFF )
        {
          v22 = *(_DWORD *)(2 * j + 0x202EAC8);
          v23 = v22 << 27;
          v24 = (unsigned int)(v22 << 22) >> 27;
          v25 = (unsigned int)(v22 << 17) >> 27;
          v26 = *(_DWORD *)(2 * j + 0x202EEC8);
          v27 = (((v26 << 24) & 0x1FFFFFFFu) + 0x2000000) >> 24;
          v28 = ((unsigned int)(v26 << 22) >> 27) + 2;
          v29 = ((unsigned int)(v26 << 17) >> 27) + 2;
          v30 = v23 >> 3;
          if ( v27 > (signed int)v30 >> 24 )
            v27 = v30 >> 24;
          if ( (char)v28 > v24 )
            v28 = (unsigned __int8)v24;
          if ( (char)v29 > v25 )
            v29 = (unsigned __int8)v25;
          *(_WORD *)(2 * j + 0x202EEC8) = (char)v27 | (unsigned __int16)(v28 << 24 >> 19) | (v29 << 24 >> 14);
        }
      }
      else if ( v4 == 3 )
      {
        for ( k = v2; k < v3; k = (k + 1) & 0xFFFF )
        {
          v32 = ((*(_DWORD *)(2 * k + 0x202EEC8) << 24) & 0x1FFFFFFF) - 0x2000000;
          v33 = ((*(_DWORD *)(2 * k + 0x202EEC8) << 22 >> 27) - 2) & 0xFF;
          v34 = ((*(_DWORD *)(2 * k + 0x202EEC8) << 17 >> 27) - 2) & 0xFF;
          v35 = v32 >> 24;
          if ( (v32 & 0x80000000) != 0 )
            LOBYTE(v35) = 0;
          if ( ((*(_DWORD *)(2 * k + 0x202EEC8) << 22 >> 27) - 2) & 0x80 )
            v33 = 0;
          if ( ((*(_DWORD *)(2 * k + 0x202EEC8) << 17 >> 27) - 2) & 0x80 )
            v34 = 0;
          *(_WORD *)(2 * k + 0x202EEC8) = (char)v35 | (unsigned __int16)(v33 << 24 >> 19) | (v34 << 24 >> 14);
        }
      }
    }
    else if ( !(v202F390 & 0x3F) )
    {
      for ( l = v2; l < v3; l = (l + 1) & 0xFFFF )
      {
        v6 = *(_DWORD *)(2 * l + 0x202EAC8);
        v7 = v6 << 27;
        v8 = (unsigned int)(v6 << 22) >> 27;
        v9 = (unsigned int)(v6 << 17) >> 27;
        v10 = *(_DWORD *)(2 * l + 0x202EEC8);
        v11 = ((v10 << 24) & 0x1FFFFFFF) - 0x2000000;
        v12 = (((unsigned int)(v10 << 22) >> 27) - 2) & 0xFF;
        v13 = (((unsigned int)(v10 << 17) >> 27) - 2) & 0xFF;
        v14 = (unsigned int)v11 >> 24;
        v15 = v7 >> 3;
        if ( v11 >> 24 < (signed int)v15 >> 24 )
          v14 = v15 >> 24;
        if ( (char)((*(_DWORD *)(2 * l + 0x202EEC8) << 22 >> 27) - 2) < v8 )
          v12 = (unsigned __int8)v8;
        if ( (char)((*(_DWORD *)(2 * l + 0x202EEC8) << 17 >> 27) - 2) < v9 )
          v13 = (unsigned __int8)v9;
        *(_WORD *)(2 * l + 0x202EEC8) = (char)v14 | (unsigned __int16)(v12 << 24 >> 19) | (v13 << 24 >> 14);
      }
    }
    v36 = (unsigned __int8)(v202F392 & 0xFB) | 4 * (((unsigned int)v202F392 << 29 >> 31) ^ 1);
    v202F392 = v202F392 & 0xFB | 4 * (((unsigned int)v202F392 << 29 >> 31) ^ 1);
    if ( v36 & 4 )
    {
      v1 = v202F38F;
      return v1 >> 7;
    }
    v37 = v202F38C << 21;
    if ( (((v37 >> 27) - (v36 << 25 >> 28)) & 0x80000000) == 0 )
      v202F38C = v202F38C & 0xF83F | (((((unsigned int)v202F38C << 21 >> 27) - (v36 << 25 >> 28)) & 0x1F) << 6);
    else
      v202F38C &= 0xF83Fu;
    if ( v202F38C & 0x7C0 )
    {
LABEL_67:
      v1 = v202F38F;
      return v1 >> 7;
    }
    v38 = v202F390 & 0x3F;
    if ( v38 == 1 )
    {
      v39 = -1;
      CpuSet(&v39, 33746632, 83886336);
    }
    else
    {
      if ( v38 > 1 )
      {
        if ( v38 != 2 )
        {
          if ( v38 == 3 )
          {
            v40 = v202F38C & 0x7C0;
            CpuSet(&v40, 33746632, 83886336);
          }
          goto LABEL_66;
        }
      }
      else if ( v202F390 & 0x3F )
      {
        goto LABEL_66;
      }
      CpuSet(33745608, 33746632, 67109120);
    }
LABEL_66:
    v202F391 &= 0xFCu;
    v202F392 |= 2u;
    goto LABEL_67;
  }
  v1 = v202F38F;
  return v1 >> 7;
}
