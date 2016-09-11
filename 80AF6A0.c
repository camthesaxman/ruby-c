int sub_80AF6A0()
{
  signed int v0; // r9@1
  __int16 *v1; // r4@1
  __int16 v2; // r0@2
  int v3; // r2@2
  signed int v4; // r9@9
  __int16 *v5; // r4@9
  _WORD *v6; // r6@9
  __int16 *v7; // r2@9
  _WORD *v8; // r5@9
  __int16 *v9; // r3@9
  signed int v10; // r9@11
  signed int v11; // r4@12
  int v12; // r10@14
  int *v13; // r3@15
  __int16 *v14; // r6@15
  int *v15; // r8@15
  __int16 *v16; // r2@15
  int v17; // r1@15
  int *v18; // r5@15
  __int16 *v19; // r4@15
  _DWORD *v20; // r3@15
  __int16 *v21; // r1@15
  signed int v22; // r9@18
  int v23; // r1@18
  __int16 v25[36]; // [sp+0h] [bp-90h]@1
  __int16 v26[36]; // [sp+8h] [bp-88h]@1
  __int16 v27[36]; // [sp+Ch] [bp-84h]@1
  __int16 v28[36]; // [sp+14h] [bp-7Ch]@1
  int v29; // [sp+48h] [bp-48h]@15
  int v30; // [sp+4Ch] [bp-44h]@15
  int v31; // [sp+50h] [bp-40h]@15
  int v32; // [sp+54h] [bp-3Ch]@15
  __int16 *v33; // [sp+58h] [bp-38h]@13
  _DWORD *v34; // [sp+5Ch] [bp-34h]@13
  __int16 *v35; // [sp+60h] [bp-30h]@13
  __int16 *v36; // [sp+64h] [bp-2Ch]@1
  __int16 *v37; // [sp+68h] [bp-28h]@1
  __int16 *v38; // [sp+6Ch] [bp-24h]@1
  int v39; // [sp+8Ch] [bp-4h]@20

  memset(v25, 0, 8);
  v0 = 0;
  v36 = v26;
  v37 = v27;
  v38 = v28;
  v1 = v25;
  do
  {
    v2 = Random();
    *v1 = v2;
    v3 = 0;
    if ( v0 > 0 )
    {
      if ( (unsigned __int16)v2 == (unsigned __int16)v25[0] )
      {
        --v1;
        --v0;
      }
      else
      {
        while ( ++v3 < v0 )
        {
          if ( (unsigned __int16)*v1 == (unsigned __int16)v25[v3] )
          {
            --v1;
            --v0;
            break;
          }
        }
      }
    }
    ++v1;
    ++v0;
  }
  while ( v0 <= 3 );
  v4 = 0;
  v5 = v25;
  v6 = (_WORD *)33785464;
  v7 = v36;
  v8 = (_WORD *)33785456;
  v9 = v37;
  do
  {
    *(_DWORD *)v7 = *v6;
    *(_DWORD *)v9 = *v8;
    *((_DWORD *)v7 + 2) = (unsigned __int16)*v5;
    *(_DWORD *)&v38[8 * v4] = v4;
    ++v5;
    ++v6;
    v7 += 8;
    ++v8;
    v9 += 8;
    ++v4;
  }
  while ( v4 <= 3 );
  v10 = 0;
  do
  {
    v11 = 3;
    if ( v10 < 3 )
    {
      v33 = v37;
      v34 = v36 + 4;
      v35 = v38;
      do
      {
        v12 = v11 - 1;
        if ( sub_80AF828(v11 - 1, v11, v36) << 24 )
        {
          v13 = (int *)&v36[8 * v12];
          v29 = *v13;
          v14 = &v33[8 * v12];
          v30 = *(_DWORD *)v14;
          v15 = &v34[4 * v12];
          v31 = *v15;
          v16 = &v35[8 * v12];
          v32 = *(_DWORD *)v16;
          v17 = 8 * v11;
          v18 = (int *)&v36[8 * v11];
          *v13 = *v18;
          v19 = &v33[8 * v11];
          *(_DWORD *)v14 = *(_DWORD *)v19;
          v20 = &v34[v17 / 2u];
          *v15 = v34[v17 / 2u];
          v21 = &v35[v17];
          *(_DWORD *)v16 = *(_DWORD *)v21;
          *v18 = v29;
          *(_DWORD *)v19 = v30;
          *v20 = v31;
          *(_DWORD *)v21 = v32;
        }
        v11 = v12;
      }
      while ( v12 > v10 );
    }
    ++v10;
  }
  while ( v10 <= 2 );
  v22 = 0;
  v23 = (int)v38;
  do
  {
    *(_BYTE *)(*(_DWORD *)v23 + 33785488) = v22;
    v23 += 16;
    ++v22;
  }
  while ( v22 <= 3 );
  return v39;
}
