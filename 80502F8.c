signed int __fastcall sub_80502F8(int a1, unsigned __int16 *a2, unsigned __int8 a3, unsigned int a4)
{
  int v4; // r10@1
  unsigned __int16 *v5; // r2@1
  signed int v6; // r4@1
  int v7; // r6@3
  unsigned __int16 *v8; // r1@3
  signed int v9; // r4@3
  int v10; // r4@9
  int v11; // r3@10
  int v12; // r6@11
  _WORD *v13; // r9@12
  _WORD *v14; // r5@12
  int v15; // r0@13
  _BOOL4 v16; // r0@16
  unsigned int v18; // r2@20
  unsigned __int16 *v19; // r1@20
  signed int v20; // r4@20
  signed int v21; // r4@28
  unsigned __int16 *v22; // r1@28
  signed int v23; // r4@44
  unsigned __int16 *v24; // r1@44
  __int16 *v25; // r2@44
  int v26; // r0@50
  int v27; // r0@52
  int v28; // r0@54
  int v29; // r0@56
  int v30; // r0@58
  unsigned __int16 v31; // [sp+0h] [bp-34h]@1
  __int16 v32; // [sp+4h] [bp-30h]@37
  __int16 v33; // [sp+6h] [bp-2Eh]@39
  __int16 v34; // [sp+8h] [bp-2Ch]@41
  int v35; // [sp+Ch] [bp-28h]@16
  int v36; // [sp+10h] [bp-24h]@1

  v4 = a1;
  v36 = a3;
  a4 = (unsigned __int8)a4;
  v5 = &v31;
  v6 = 5;
  do
  {
    *v5 = *a2;
    ++a2;
    ++v5;
    --v6;
  }
  while ( v6 >= 0 );
  v7 = 0;
  v8 = &v31;
  v9 = 4;
  do
  {
    if ( !*v8 )
      ++v7;
    ++v8;
    --v9;
  }
  while ( v9 >= 0 );
  if ( v7 == 5 || a4 > 3 )
    return 12;
  v10 = 0;
  if ( v36 > 0 )
  {
    v11 = a1;
    while ( 1 )
    {
      v12 = 0;
      if ( v36 > 0 )
        break;
_08050394:
      v11 += 16;
      if ( ++v10 >= v36 )
        goto _0805039E;
    }
    v13 = (_WORD *)v11;
    v14 = (_WORD *)v4;
    while ( 1 )
    {
      v15 = *v13;
      if ( v15 == *v14 && v10 != v12 )
      {
        if ( v15 != 175 )
          return 12;
        v35 = v11;
        v16 = help_system_is_not_first_time(v4, (unsigned __int8)v10, (unsigned __int8)v12);
        v11 = v35;
        if ( v16 << 24 )
          return 12;
      }
      v14 += 8;
      if ( ++v12 >= v36 )
        goto _08050394;
    }
  }
_0805039E:
  v18 = 0;
  v19 = &v31;
  v20 = 4;
  do
  {
    if ( (signed __int16)*v19 > 0 )
      v18 = (v18 + 1) & 0xFF;
    ++v19;
    --v20;
  }
  while ( v20 >= 0 );
  if ( v18 > 3 )
    return 13;
  if ( v18 == 3 )
    return 11;
  v21 = 0;
  v22 = &v31;
  do
  {
    if ( (signed __int16)*v22 > 50 )
      return 14;
    ++v22;
    ++v21;
  }
  while ( v21 <= 4 );
  if ( v18 == 1 )
  {
    if ( (signed __int16)v31 > 0 )
      return 1;
    if ( *(&v31 + 1) << 16 > 0 )
      return 2;
    if ( v32 > 0 )
      return 3;
    if ( v33 > 0 )
      return 4;
    if ( v34 > 0 )
      return 5;
  }
  if ( v18 == 2 )
  {
    v23 = 0;
    v24 = &v31;
    v25 = &word_3000520;
    do
    {
      if ( (signed __int16)*v24 > 0 )
      {
        *v25 = v23;
        ++v25;
      }
      ++v24;
      ++v23;
    }
    while ( v23 <= 4 );
    if ( (signed __int16)*(&v31 + word_3000520) < (signed __int16)*(&v31 + word_3000522[0]) )
    {
      if ( !word_3000522[0] )
      {
        v26 = word_3000520 << 16;
        return v26 | 6;
      }
      if ( word_3000522[0] == 1 )
      {
        v27 = word_3000520 << 16;
        return v27 | 7;
      }
      if ( word_3000522[0] == 2 )
      {
        v28 = word_3000520 << 16;
        return v28 | 8;
      }
      if ( word_3000522[0] == 3 )
      {
        v29 = word_3000520 << 16;
        return v29 | 9;
      }
      if ( word_3000522[0] == 4 )
      {
        v30 = word_3000520 << 16;
        return v30 | 0xA;
      }
    }
    else
    {
      if ( !word_3000520 )
      {
        v26 = word_3000522[0] << 16;
        return v26 | 6;
      }
      if ( word_3000520 == 1 )
      {
        v27 = word_3000522[0] << 16;
        return v27 | 7;
      }
      if ( word_3000520 == 2 )
      {
        v28 = word_3000522[0] << 16;
        return v28 | 8;
      }
      if ( word_3000520 == 3 )
      {
        v29 = word_3000522[0] << 16;
        return v29 | 9;
      }
      if ( word_3000520 == 4 )
      {
        v30 = word_3000522[0] << 16;
        return v30 | 0xA;
      }
    }
  }
  return 0;
}
