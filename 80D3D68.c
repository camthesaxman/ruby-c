int __fastcall sub_80D3D68(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v4; // r3@7
  int v5; // r1@8
  signed int v6; // r2@8
  signed int v7; // r2@9
  signed int v8; // r2@10
  int v9; // r3@11
  signed int v10; // r2@11
  signed int v11; // r2@12
  int v12; // r0@14
  char *v13; // r2@14
  __int16 v14; // r0@14
  int v15; // r0@15
  int v16; // r0@18
  __int16 v17; // r0@20
  int v18; // r3@22
  signed int v19; // r1@23
  signed int v20; // r2@24
  int v21; // r3@26
  signed int v22; // r1@26
  int v23; // r3@27
  int v24; // r3@29
  signed int v25; // r1@30
  signed int v26; // r2@31
  int v27; // r3@33
  signed int v28; // r1@33
  int v29; // r3@34
  int v31; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 > 1 )
    {
      if ( v3 == 2 )
      {
        LOWORD(v24) = 0;
        if ( (signed int)*((_WORD *)v2 + 8) > 0 )
        {
          do
          {
            *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (signed __int16)v24) = *((_WORD *)v2 + 6);
            v25 = ((signed __int16)v24 + 1) << 16;
            v24 = ((signed __int16)v24 + 1) & 0xFFFF;
          }
          while ( v25 >> 16 < *((_WORD *)v2 + 8) );
        }
        v26 = *((_WORD *)v2 + 8) << 16;
        if ( *((_WORD *)v2 + 8) < (signed int)*((_WORD *)v2 + 9) )
        {
          do
          {
            *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (v26 >> 16)) = *((_WORD *)v2 + 5);
            v26 = ((v26 >> 16) + 1) << 16;
          }
          while ( v26 >> 16 < *((_WORD *)v2 + 9) );
        }
        v27 = *((_WORD *)v2 + 9);
        v28 = v27 << 16;
        if ( (signed __int16)v27 <= 159 )
        {
          do
          {
            *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (v28 >> 16)) = *((_WORD *)v2 + 6);
            v29 = (v28 >> 16) + 1;
            v28 = v29 << 16;
          }
          while ( (signed __int16)v29 <= 159 );
        }
        if ( *((_WORD *)v2 + 19) == -1 )
        {
          remove_some_task();
          DestroyTask(v1);
        }
      }
    }
    else if ( !*((_WORD *)v2 + 4) )
    {
      LOWORD(v4) = 0;
      if ( (signed int)*((_WORD *)v2 + 8) > 0 )
      {
        do
        {
          v5 = (signed __int16)v4;
          word_3005560[v5] = *((_WORD *)v2 + 6);
          word_3004DE0[v5] = *((_WORD *)v2 + 6);
          v6 = ((signed __int16)v4 + 1) << 16;
          v4 = ((signed __int16)v4 + 1) & 0xFFFF;
        }
        while ( v6 >> 16 < *((_WORD *)v2 + 8) );
      }
      v7 = *((_WORD *)v2 + 8) << 16;
      if ( *((_WORD *)v2 + 8) < (signed int)*((_WORD *)v2 + 9) )
      {
        do
        {
          v8 = v7 >> 16;
          word_3005560[v8] = *((_WORD *)v2 + 5);
          word_3004DE0[v8] = *((_WORD *)v2 + 5);
          v7 = (v8 + 1) << 16;
        }
        while ( v7 >> 16 < *((_WORD *)v2 + 9) );
      }
      v9 = *((_WORD *)v2 + 9);
      v10 = v9 << 16;
      if ( (signed __int16)v9 <= 159 )
      {
        do
        {
          v11 = v10 >> 16;
          word_3005560[v11] = *((_WORD *)v2 + 6);
          word_3004DE0[v11] = *((_WORD *)v2 + 6);
          v9 = (v11 + 1) & 0xFFFF;
          v10 = (v11 + 1) << 16;
        }
        while ( v10 >> 16 <= 159 );
      }
      if ( *((_WORD *)v2 + 8) )
      {
        v15 = v9 << 16 >> 15;
        v13 = (char *)word_3004DE0 + v15;
        *(__int16 *)((char *)word_3005560 + v15) = *((_WORD *)v2 + 6);
        v14 = *((_WORD *)v2 + 6);
      }
      else
      {
        v12 = v9 << 16 >> 15;
        v13 = (char *)word_3004DE0 + v12;
        *(__int16 *)((char *)word_3005560 + v12) = *((_WORD *)v2 + 5);
        v14 = *((_WORD *)v2 + 5);
      }
      *(_WORD *)v13 = v14;
      sub_80895F8(67108946, -1570766847, 1);
      ++*((_WORD *)v2 + 4);
    }
    return v31;
  }
  if ( *((_WORD *)v2 + 7) )
  {
    v17 = *((_WORD *)v2 + 9) + 1;
    *((_WORD *)v2 + 9) = v17;
    if ( v17 > 111 )
      goto _080D3EE2;
  }
  else
  {
    v16 = *((_WORD *)v2 + 8) - 1;
    *((_WORD *)v2 + 8) = v16;
    if ( v16 << 16 <= 0 )
    {
      *((_WORD *)v2 + 8) = 0;
_080D3EE2:
      ++*((_WORD *)v2 + 4);
      goto _080D3EE8;
    }
  }
_080D3EE8:
  LOWORD(v18) = 0;
  if ( (signed int)*((_WORD *)v2 + 8) > 0 )
  {
    do
    {
      *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (signed __int16)v18) = *((_WORD *)v2 + 6);
      v19 = ((signed __int16)v18 + 1) << 16;
      v18 = ((signed __int16)v18 + 1) & 0xFFFF;
    }
    while ( v19 >> 16 < *((_WORD *)v2 + 8) );
  }
  v20 = *((_WORD *)v2 + 8) << 16;
  if ( *((_WORD *)v2 + 8) < (signed int)*((_WORD *)v2 + 9) )
  {
    do
    {
      *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (v20 >> 16)) = *((_WORD *)v2 + 5);
      v20 = ((v20 >> 16) + 1) << 16;
    }
    while ( v20 >> 16 < *((_WORD *)v2 + 9) );
  }
  v21 = *((_WORD *)v2 + 9);
  v22 = v21 << 16;
  if ( (signed __int16)v21 <= 159 )
  {
    do
    {
      *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + (v22 >> 16)) = *((_WORD *)v2 + 6);
      v23 = (v22 >> 16) + 1;
      v22 = v23 << 16;
    }
    while ( (signed __int16)v23 <= 159 );
  }
  return v31;
}
