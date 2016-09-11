int __fastcall sub_8040F80(int a1, int a2, int a3, char *a4, int a5)
{
  char *v5; // r4@1
  int v6; // r7@1
  int v7; // r1@1
  int v8; // r1@1
  unsigned __int8 v9; // r2@3
  int v10; // r12@4
  int v11; // r0@4
  int v12; // r10@5
  unsigned __int8 v13; // r9@5
  int v14; // r3@7
  signed int v15; // r2@8
  unsigned int v16; // r3@10
  unsigned int v17; // r2@11
  unsigned int v18; // r4@11
  int v19; // r0@11
  int v20; // r1@12
  char *v21; // r3@12
  unsigned int v22; // r2@12
  int v23; // r1@12
  int v24; // r3@15
  signed int v25; // r1@16
  int v27; // [sp+0h] [bp-5Ch]@12
  int v28; // [sp+20h] [bp-3Ch]@1
  unsigned int v29; // [sp+24h] [bp-38h]@1
  unsigned int v30; // [sp+28h] [bp-34h]@1
  unsigned int v31; // [sp+2Ch] [bp-30h]@2
  char *v32; // [sp+30h] [bp-2Ch]@5
  int v33; // [sp+34h] [bp-28h]@3
  __int16 v34; // [sp+38h] [bp-24h]@4
  int v35; // [sp+58h] [bp-4h]@21

  v28 = a3;
  v5 = a4;
  v6 = a5;
  v7 = (2 * a2 & 0x1FF) + (8 * a1 & 0x7FF);
  v29 = gUnknown_082087C4[v7 + 1];
  v30 = gUnknown_082087C4[v7];
  v8 = 0;
  if ( v29 > 0 )
  {
    v31 = 2 * (32 - v30);
    do
    {
      v9 = 0;
      v33 = v8 + 1;
      if ( v30 > 0 )
      {
        do
        {
          v10 = 32 * (*(_WORD *)v5 & 0x3FF);
          v11 = *(_WORD *)v5 & 0xC00;
          v34 = *(_WORD *)v5;
          if ( v11 )
          {
            if ( v11 == 2048 )
            {
              LOBYTE(v14) = 0;
              v32 = v5 + 2;
              v12 = v6 + 32;
              v13 = v9 + 1;
              do
              {
                v40000D4 = v28 + 4 * (7 - (char)v14) + v10;
                v40000D8 = v6 + 4 * (char)v14;
                v40000DC = -2080374783;
                v15 = ((char)v14 + 1) << 24;
                v14 = ((char)v14 + 1) & 0xFF;
              }
              while ( v15 >> 24 <= 7 );
            }
            else
            {
              v16 = 0;
              v32 = v5 + 2;
              v12 = v6 + 32;
              v13 = v9 + 1;
              do
              {
                LOBYTE(v17) = 0;
                v18 = v16 << 24;
                v19 = 4 * v16 & 0xFF;
                do
                {
                  v20 = (char)v17;
                  v21 = (char *)&v27 + v19 + 3 - (char)v17;
                  v22 = *(_BYTE *)(v28 + v10 + v19 + (char)v17);
                  *v21 = 16 * (v22 & 0xF) | (v22 >> 4);
                  v23 = (v20 + 1) << 24;
                  v17 = (unsigned int)v23 >> 24;
                }
                while ( v23 >> 24 <= 3 );
                v16 = (v18 + 0x1000000) >> 24;
              }
              while ( (signed int)(v18 + 0x1000000) >> 24 <= 7 );
              if ( v34 & 0x800 )
              {
                LOBYTE(v24) = 0;
                do
                {
                  v40000D4 = &v27 + 7 - (char)v24;
                  v40000D8 = v6 + 4 * (char)v24;
                  v40000DC = -2080374783;
                  v25 = ((char)v24 + 1) << 24;
                  v24 = ((char)v24 + 1) & 0xFF;
                }
                while ( v25 >> 24 <= 7 );
              }
              else
              {
                v40000D4 = &v27;
                v40000D8 = v6;
                v40000DC = -2080374776;
              }
            }
          }
          else
          {
            v40000D4 = v28 + v10;
            v40000D8 = v6;
            v40000DC = -2080374776;
            v32 = v5 + 2;
            v12 = v6 + 32;
            v13 = v9 + 1;
          }
          v5 = v32;
          v6 = v12;
          v9 = v13;
        }
        while ( v13 < v30 );
      }
      v5 += v31;
      v8 = (unsigned __int8)v33;
    }
    while ( (unsigned __int8)v33 < v29 );
  }
  return v35;
}
