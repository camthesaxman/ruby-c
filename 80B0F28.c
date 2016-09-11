int __fastcall sub_80B0F28(unsigned __int8 a1)
{
  int v1; // r8@1
  signed int v2; // r5@1
  __int16 *v3; // r6@1
  int v4; // r7@1
  __int16 v5; // r1@2
  int v6; // r2@2
  signed int v7; // r5@9
  _BYTE *v8; // r8@9
  signed int v9; // r4@10
  _BYTE *v10; // r3@11
  int v11; // r1@12
  int v12; // r0@12
  signed int v13; // r2@15
  int v14; // r1@16
  signed int v15; // r5@23
  signed int v16; // r5@26
  _BYTE *v17; // r3@26
  int v18; // r6@26
  int v19; // r2@27
  char *i; // r1@27
  signed int v21; // r5@31
  signed int v22; // r4@32
  int v23; // r10@32
  int v24; // r3@33
  char *v25; // r2@34
  unsigned int v26; // r6@34
  char v27; // r0@36
  int v29; // [sp+0h] [bp-34h]@23
  __int16 v30[4]; // [sp+4h] [bp-30h]@1
  __int16 *v31; // [sp+Ch] [bp-28h]@11
  __int16 *v32; // [sp+10h] [bp-24h]@11
  int v33; // [sp+30h] [bp-4h]@39

  v1 = a1;
  memset(v30, 0, 8);
  v2 = 0;
  v3 = v30;
  v4 = 0;
  do
  {
    v5 = Random();
    v30[v4] = v5;
    v6 = 0;
    if ( v2 > 0 )
    {
      if ( (unsigned __int16)v5 == (unsigned __int16)v30[0] )
      {
_080B0F80:
        --v3;
        --v4;
        --v2;
      }
      else
      {
        while ( ++v6 < v2 )
        {
          if ( (unsigned __int16)*v3 == (unsigned __int16)v30[v6] )
            goto _080B0F80;
        }
      }
    }
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v2 <= 3 );
  if ( v1 )
  {
    memset(&v29, 255, 4);
    v16 = 0;
    v17 = (_BYTE *)33785494;
    v18 = 0;
    do
    {
      v19 = *(_BYTE *)(v18 + 33657451) & 3;
      for ( i = (char *)&v29 + v19; (unsigned __int8)*i != 255; i = (char *)&v29 + v19 )
        v19 = (v19 + 1) & 0xFF;
      *i = v16;
      *v17++ = v19;
      v18 += 28;
      ++v16;
    }
    while ( v16 <= 3 );
    v21 = 0;
    do
    {
      v22 = 3;
      v23 = v21 + 1;
      if ( v21 < 3 )
      {
        do
        {
          v24 = v22 - 1;
          if ( (*(_BYTE *)(28 * v22 + 0x201924F) & 3) == (*(_BYTE *)(28 * v22 + 0x201926B) & 3) )
          {
            v25 = (char *)(v22 + 33785494);
            v26 = *(_BYTE *)(v22 + 33785493);
            if ( v26 < *(_BYTE *)(v22 + 33785494)
              && (unsigned __int16)v30[v24] < (unsigned int)(unsigned __int16)v30[v22] )
            {
              v27 = *v25;
              *v25 = v26;
              *(_BYTE *)(v22 + 33785493) = v27;
            }
          }
          --v22;
        }
        while ( v24 > v21 );
      }
      ++v21;
    }
    while ( v23 <= 2 );
  }
  else
  {
    v7 = 0;
    v8 = (_BYTE *)33785494;
    do
    {
      *v8 = v7;
      v9 = 0;
      if ( v7 > 0 )
      {
        v31 = v30;
        v32 = &v30[v7];
        v10 = (_BYTE *)33785494;
        while ( 1 )
        {
          v11 = *(_WORD *)(2 * *v10 + 0x2038670);
          v12 = *(_WORD *)(2 * v7 + 0x2038670);
          if ( v11 < v12 || v11 == v12 && (unsigned __int16)v31[*v10] < (unsigned int)(unsigned __int16)*v32 )
            break;
          ++v10;
          if ( ++v9 >= v7 )
            goto _080B1018;
        }
        v13 = v7;
        if ( v7 > v9 )
        {
          v14 = v7 + 33785493;
          do
          {
            *(_BYTE *)(v14 + 1) = *(_BYTE *)v14;
            --v14;
            --v13;
          }
          while ( v13 > v9 );
        }
        *v10 = v7;
      }
_080B1018:
      if ( v9 == v7 )
        *v8 = v7;
      ++v8;
      ++v7;
    }
    while ( v7 <= 3 );
    memcpy(&v29, 33785494, 4);
    v15 = 0;
    do
    {
      *(_BYTE *)(*((_BYTE *)&v29 + v15) + 0x2038696) = v15;
      ++v15;
    }
    while ( v15 <= 3 );
  }
  return v33;
}
