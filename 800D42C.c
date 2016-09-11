int __fastcall unref_sub_800D42C(signed int a1, int a2, _BYTE *a3, _BYTE *a4)
{
  int v4; // r9@1
  _BYTE *v5; // r5@1
  signed int v6; // r1@1
  int v7; // r0@2
  signed int v8; // r7@4
  signed int v9; // r3@5
  _BYTE *v10; // r12@5
  int v11; // r2@6
  int v12; // r1@6
  signed int v13; // r6@6
  int v14; // r7@13
  int v15; // r6@14
  int v16; // r8@14
  int v17; // r10@15
  _BYTE *v18; // r0@15
  _BYTE *v19; // r1@15
  signed int v20; // r3@15
  int v21; // r7@21
  int v22; // r3@22
  int v23; // r8@22
  int v24; // r10@23
  int v25; // r12@23
  _BYTE *v26; // r2@23
  _BYTE *v27; // r3@23
  signed int v28; // r6@23
  int v29; // r6@37
  int v30; // r10@38
  signed int v31; // r3@39
  int v32; // r7@41
  int v33; // r8@42
  signed int v34; // r3@43
  int v35; // r3@46
  signed int v36; // r3@49
  signed int v37; // r3@53
  int v39; // [sp+0h] [bp-44h]@1
  _BYTE *v40; // [sp+4h] [bp-40h]@1
  int v41; // [sp+8h] [bp-3Ch]@2
  int v42; // [sp+10h] [bp-34h]@3
  int v43; // [sp+14h] [bp-30h]@4
  int v44; // [sp+40h] [bp-4h]@0

  v4 = a1;
  v39 = a2;
  v40 = a3;
  v5 = a4;
  v6 = a1;
  if ( a1 & 1 )
  {
    v41 = ((a1 >> 1) + 4) & 0xFF;
    v7 = 0;
    if ( v39 > 0 )
    {
      v42 = 8 - v6;
      do
      {
        v8 = 0;
        v43 = v7 + 1;
        if ( v42 > 0 )
        {
          do
          {
            v9 = 0;
            v10 = v5;
            do
            {
              v11 = (int)(&v5[256 * v41] + 256 * (v8 >> 1) + 32 * v9);
              v12 = (int)&v10[256 * (v8 >> 1)];
              v13 = 15;
              do
              {
                if ( v8 & 1 )
                {
                  *(_BYTE *)(v12 + 16) = 0;
                  *(_BYTE *)(v11 + 256) = 0;
                }
                else
                {
                  *(_BYTE *)v12 = v8 & 1;
                  *(_BYTE *)(v11 + 16) = 0;
                }
                ++v11;
                ++v12;
                --v13;
              }
              while ( v13 >= 0 );
              v10 += 32;
              ++v9;
            }
            while ( v9 <= 7 );
            ++v8;
          }
          while ( v8 < 8 - v4 );
        }
        v14 = 0;
        do
        {
          v15 = 0;
          v16 = v14 + 1;
          do
          {
            v17 = v15 + 1;
            v18 = &v5[256 * v15 + 192] + 32 * v14;
            v19 = &v5[256 * v15] + 32 * v14;
            v20 = 31;
            do
            {
              *v19 = 0;
              *v18++ = 0;
              ++v19;
              --v20;
            }
            while ( v20 >= 0 );
            ++v15;
          }
          while ( v17 <= 7 );
          ++v14;
        }
        while ( v16 <= 1 );
        if ( v4 == 5 )
          v5 += 288;
        v21 = 0;
        if ( v4 > 0 )
        {
          do
          {
            v22 = 0;
            v23 = v21 + 1;
            if ( v4 > 0 )
            {
              do
              {
                v24 = v22 + 1;
                v25 = (int)(v5 + 18);
                v26 = v40;
                v27 = v5;
                v28 = 3;
                do
                {
                  *(_BYTE *)v25 = *v26;
                  *(_BYTE *)(v25 + 1) = v26[1];
                  *(_BYTE *)(v25 + 30) = v26[2];
                  *(_BYTE *)(v25 + 31) = v26[3];
                  v27[258] = v26[16];
                  v27[259] = v26[17];
                  v27[288] = v26[18];
                  v27[289] = v26[19];
                  v25 += 4;
                  v26 += 4;
                  v27 += 4;
                  --v28;
                }
                while ( v28 >= 0 );
                v40 += 32;
                v5 += 32;
                v22 = v24;
              }
              while ( v24 < v4 );
            }
            if ( v4 == 7 )
            {
              v5 += 32;
            }
            else if ( v4 == 5 )
            {
              v5 += 96;
            }
            ++v21;
          }
          while ( v23 < v4 );
        }
        if ( v4 == 7 )
        {
          v5 += 256;
        }
        else if ( v4 == 5 )
        {
          v5 += 480;
        }
        v7 = v43;
      }
      while ( v43 < v39 );
    }
  }
  else
  {
    v29 = 0;
    if ( v39 > 0 )
    {
      do
      {
        v30 = v29 + 1;
        if ( a1 == 6 )
        {
          v31 = 255;
          do
          {
            *v5++ = 0;
            --v31;
          }
          while ( v31 >= 0 );
        }
        v32 = 0;
        if ( a1 > 0 )
        {
          do
          {
            v33 = v32 + 1;
            if ( a1 == 6 )
            {
              v34 = 31;
              do
              {
                *v5++ = 0;
                --v34;
              }
              while ( v34 >= 0 );
            }
            if ( 32 * a1 > 0 )
            {
              v35 = 32 * a1;
              do
              {
                *v5++ = *v40++;
                --v35;
              }
              while ( v35 );
            }
            if ( a1 == 6 )
            {
              v36 = 31;
              do
              {
                *v5++ = 0;
                --v36;
              }
              while ( v36 >= 0 );
            }
            ++v32;
          }
          while ( v33 < a1 );
        }
        if ( a1 == 6 )
        {
          v37 = 255;
          do
          {
            *v5++ = 0;
            --v37;
          }
          while ( v37 >= 0 );
        }
        ++v29;
      }
      while ( v30 < v39 );
    }
  }
  return v44;
}
