int __fastcall sub_80DA6F0(int a1)
{
  int v1; // r5@1
  int v2; // r12@1
  char v3; // r2@1
  int v4; // r0@2
  signed int v5; // r4@4
  int v6; // r8@4
  _BYTE *v7; // r3@16
  int v8; // r0@16
  int v9; // r3@16
  _BYTE *v10; // r3@33
  int v11; // r0@33
  int v12; // r3@36
  char v13; // r1@44
  char v14; // r0@44
  _BYTE *v15; // r3@50
  int v16; // r0@50
  _BYTE *v17; // r3@66
  int v18; // r0@66
  char v19; // r2@69
  int v20; // r0@79
  __int16 v21; // r6@79
  __int16 *v22; // r2@79
  int v23; // r0@79
  int v25; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = a1 + 46;
  v3 = *(_BYTE *)(a1 + 46);
  if ( v3 & 1 )
  {
    v4 = *(_BYTE *)(a1 + 47);
    --*(_BYTE *)(v2 + 1);
    if ( !(v4 << 24) )
    {
      *(_BYTE *)v2 = v3 & 0xFE;
      *(_BYTE *)(v2 + 1) = 0;
    }
    return v25;
  }
  v5 = (unsigned int)*(_WORD *)(a1 + 48) >> 6;
  v6 = *(_WORD *)(a1 + 48);
  if ( v5 == 1 )
  {
    if ( !((unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28) )
    {
      *(_BYTE *)v2 = v3 | 9;
      *(_BYTE *)(a1 + 47) = 0;
_080DA9BC:
      v13 = *(_BYTE *)v2 & 0xF;
      v14 = 16;
_080DAC4C:
      *(_BYTE *)v2 = v13 | v14;
      goto _080DAC52;
    }
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 2 )
    {
      *(_BYTE *)v2 = v3 | 1;
      *(_BYTE *)(a1 + 47) = 0;
      goto _080DA9BC;
    }
    if ( !(v3 & 8) )
      goto _080DA9BC;
    v10 = (_BYTE *)(a1 + 63);
    v11 = (unsigned __int8)(*(_BYTE *)(a1 + 63) & 0xFE) | (*(_BYTE *)(a1 + 63) & 1 ^ 1) & 1;
    *v10 = v11;
    *(_BYTE *)(v1 + 42) = v11 & 1;
    *v10 = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    if ( !(*(_BYTE *)v2 & 4) )
    {
_080DA9AC:
      *(_BYTE *)v2 &= 0xF7u;
      v6 = *(_WORD *)(v2 + 2);
      goto _080DA9BC;
    }
    if ( byte_3001BAD & 2 )
    {
      if ( !(*(_BYTE *)(v2 + 14) & 1) )
      {
        *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) - 1) & 3);
        v12 = v2;
_080DA978:
        *(_BYTE *)(v12 + 14) = *(_BYTE *)(v12 + 14) & 0xFE | (*(_BYTE *)(v12 + 14) & 1 ^ 1) & 1;
        goto _080DA9AC;
      }
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) + 1) & 3);
    }
    else
    {
      v12 = v2;
      if ( !(*(_BYTE *)(v2 + 14) & 1) )
      {
        *(_BYTE *)(v1 + 67) -= 12;
        goto _080DA978;
      }
      *(_BYTE *)(v1 + 67) += 12;
    }
    *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
    goto _080DA9AC;
  }
  if ( v5 <= 1 )
  {
    if ( v5 )
      goto _080DAC52;
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 1 )
    {
      *(_BYTE *)v2 = v3 | 9;
      *(_BYTE *)(a1 + 47) = 0;
_080DA88A:
      *(_BYTE *)v2 &= 0xFu;
      goto _080DAC52;
    }
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 3 )
    {
      *(_BYTE *)v2 = *(_BYTE *)(a1 + 46) & 0xFD | 2 * ((((unsigned int)*(_BYTE *)(a1 + 46) << 30 >> 31) ^ 1) & 1) | 1;
      *(_BYTE *)(a1 + 47) = 0;
      goto _080DA88A;
    }
    if ( !(v3 & 8) )
      goto _080DA88A;
    v7 = (_BYTE *)(a1 + 63);
    v8 = (unsigned __int8)(*(_BYTE *)(a1 + 63) & 0xFE) | (*(_BYTE *)(a1 + 63) & 1 ^ 1) & 1;
    *v7 = v8;
    *(_BYTE *)(v1 + 42) = v8 & 1;
    *v7 = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    v9 = v2;
    if ( *(_BYTE *)v2 & 4 )
    {
      if ( byte_3001BAD & 2 )
      {
        if ( !(*(_BYTE *)(v2 + 14) & 1) )
        {
          *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4
                                                         * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) - 1) & 3);
_080DA868:
          *(_BYTE *)(v9 + 14) = *(_BYTE *)(v9 + 14) & 0xFE | (*(_BYTE *)(v9 + 14) & 1 ^ 1) & 1;
          goto _080DA87A;
        }
        *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) + 1) & 3);
_080DA866:
        v9 = v2;
        goto _080DA868;
      }
      if ( *(_BYTE *)(v2 + 14) & 1 )
      {
        *(_BYTE *)(v1 + 67) += 12;
        goto _080DA866;
      }
      *(_BYTE *)(v1 + 67) -= 12;
      *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
    }
_080DA87A:
    *(_BYTE *)v2 &= 0xF7u;
    v6 = *(_WORD *)(v2 + 2);
    goto _080DA88A;
  }
  if ( v5 == 2 )
  {
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 3 )
    {
      *(_BYTE *)v2 = v3 | 9;
      *(_BYTE *)(a1 + 47) = 0;
_080DAAFE:
      *(_BYTE *)v2 = *(_BYTE *)v2 & 0xF | 0x20;
      goto _080DAC52;
    }
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 1 )
    {
      *(_BYTE *)v2 = v3 | 1;
      *(_BYTE *)(a1 + 47) = 0;
      goto _080DAAFE;
    }
    if ( !(v3 & 8) )
      goto _080DAAFE;
    v15 = (_BYTE *)(a1 + 63);
    v16 = (unsigned __int8)(*(_BYTE *)(a1 + 63) & 0xFE) | (*(_BYTE *)(a1 + 63) & 1 ^ 1) & 1;
    *v15 = v16;
    *(_BYTE *)(v1 + 42) = v16 & 1;
    *v15 = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    if ( *(_BYTE *)v2 & 4 )
    {
      if ( byte_3001BAD & 2 )
      {
        if ( !(*(_BYTE *)(v2 + 14) & 1) )
        {
          *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4
                                                         * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) - 1) & 3);
_080DAAD8:
          *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
          goto _080DAAEC;
        }
        *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) + 1) & 3);
        *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
      }
      else
      {
        if ( *(_BYTE *)(v2 + 14) & 1 )
        {
          *(_BYTE *)(v1 + 67) += 12;
          goto _080DAAD8;
        }
        *(_BYTE *)(v1 + 67) -= 12;
        *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
      }
    }
_080DAAEC:
    *(_BYTE *)v2 &= 0xF7u;
    v6 = *(_WORD *)(v2 + 2);
    goto _080DAAFE;
  }
  if ( v5 == 3 )
  {
    if ( (unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28 == 2 )
    {
      *(_BYTE *)v2 = v3 | 8;
_080DAC42:
      v13 = *(_BYTE *)v2 & 0xF;
      v14 = 48;
      goto _080DAC4C;
    }
    if ( !((unsigned int)*(_BYTE *)(a1 + 46) << 24 >> 28) )
    {
      *(_BYTE *)v2 = *(_BYTE *)(a1 + 46) & 0xFD | 2 * ((((unsigned int)*(_BYTE *)(a1 + 46) << 30 >> 31) ^ 1) & 1) | 1;
      *(_BYTE *)(a1 + 47) = 0;
      goto _080DAC42;
    }
    if ( !(v3 & 8) )
      goto _080DAC42;
    v17 = (_BYTE *)(a1 + 63);
    v18 = (unsigned __int8)(*(_BYTE *)(a1 + 63) & 0xFE) | (*(_BYTE *)(a1 + 63) & 1 ^ 1) & 1;
    *v17 = v18;
    *(_BYTE *)(v1 + 42) = v18 & 1;
    *v17 = (*(_BYTE *)(v1 + 63) | 4) & 0xEF;
    if ( !(*(_BYTE *)v2 & 4) )
    {
_080DAC32:
      *(_BYTE *)v2 &= 0xF7u;
      v6 = *(_WORD *)(v2 + 2);
      goto _080DAC42;
    }
    if ( byte_3001BAD & 2 )
    {
      if ( !(*(_BYTE *)(v2 + 14) & 1) )
      {
        *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) - 1) & 3);
        v19 = *(_BYTE *)(v2 + 14);
_080DAC00:
        *(_BYTE *)(v2 + 14) = v19 & 0xFE | (v19 & 1 ^ 1) & 1;
        goto _080DAC32;
      }
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((((unsigned int)*(_BYTE *)(v1 + 5) << 28 >> 30) + 1) & 3);
    }
    else
    {
      if ( !(*(_BYTE *)(v2 + 14) & 1) )
      {
        *(_BYTE *)(v1 + 67) -= 12;
        v19 = *(_BYTE *)(v2 + 14);
        goto _080DAC00;
      }
      *(_BYTE *)(v1 + 67) += 12;
    }
    *(_BYTE *)(v2 + 14) = *(_BYTE *)(v2 + 14) & 0xFE | (*(_BYTE *)(v2 + 14) & 1 ^ 1) & 1;
    goto _080DAC32;
  }
_080DAC52:
  *(_WORD *)(v1 + 36) = gSineTable[v6] * *(_BYTE *)(v2 + 12 + ((unsigned int)*(_BYTE *)v2 << 30 >> 31)) >> 8;
  v20 = ((-*(_WORD *)(v1 + 36) >> 1) + *(_BYTE *)(v2 + 10)) & 0xFF;
  v21 = gSineTable[v20];
  v22 = &gOamMatrices[4 * ((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27)];
  LOWORD(v20) = gSineTable[v20 + 64];
  v22[3] = v20;
  *v22 = v20;
  v22[1] = v21;
  v22[2] = -v21;
  v23 = *(_WORD *)(v2 + 6) + *(_WORD *)(v2 + 8);
  *(_WORD *)(v2 + 8) = v23;
  *(_WORD *)(v1 + 34) = (unsigned int)(v23 << 16) >> 24;
  if ( *(_WORD *)(v2 + 4) & 0x8000 )
    *(_WORD *)(v2 + 2) = (unsigned __int8)(*(_WORD *)(v2 + 2) - *(_WORD *)(v2 + 4));
  else
    *(_WORD *)(v2 + 2) = ((*(_WORD *)(v2 + 4) & 0x7FFF) + *(_WORD *)(v2 + 2)) & 0xFF;
  if ( *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) >= (signed int)((unsigned int)*(_WORD *)(v2 + 14) >> 1) )
  {
    *(_WORD *)(v1 + 46) = 0;
    *(_DWORD *)(v1 + 28) = sub_80DA48C;
  }
  return v25;
}
