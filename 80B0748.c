int __fastcall sub_80B0748(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v2; // r4@2
  int v3; // r1@2
  int v4; // r6@2
  _BYTE *v5; // r9@2
  int v6; // r7@2
  int v7; // r3@3
  int v8; // r8@3
  int v9; // r2@3
  unsigned int v10; // r5@3
  int v11; // r1@3
  int v12; // r6@3
  int v13; // r0@17
  int v14; // r4@19
  int v15; // r0@22
  int v16; // r4@22
  int v17; // r0@23
  unsigned int v18; // r4@26
  int v19; // r1@26
  int v20; // r2@26
  _WORD *i; // r0@26
  unsigned int v22; // r4@31
  int v24; // [sp+0h] [bp-40h]@1
  unsigned int v25; // [sp+4h] [bp-3Ch]@1
  int v26; // [sp+8h] [bp-38h]@2
  int v27; // [sp+Ch] [bp-34h]@1
  int v28; // [sp+10h] [bp-30h]@3
  int v29; // [sp+14h] [bp-2Ch]@3
  int v30; // [sp+18h] [bp-28h]@3
  int v31; // [sp+1Ch] [bp-24h]@1
  int v32; // [sp+3Ch] [bp-4h]@0

  v24 = a1;
  v25 = 0;
  v1 = dword_3004B20;
  v31 = 4 * a1;
  v27 = 40 * a1;
  do
  {
    v2 = *(_BYTE *)(v25 + 33785494);
    v3 = 4 * v2 & 0xFF;
    v26 = 2 * v3;
    v4 = 40 * v24;
    v5 = &byte_3004B28[40 * v24] + 2 * v3;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = v3 + 1;
      v8 = *(&byte_3004B28[2 * (v3 + 1)] + v4);
      v9 = v3 + 2;
      v10 = *(&byte_3004B28[2 * (v3 + 2)] + v4);
      v11 = v3 + 3;
      v12 = *(&byte_3004B28[2 * v11] + v4);
      v28 = v7;
      v29 = v9;
      v30 = v11;
      if ( v6 == 1 )
      {
        v12 = (v12 + 1) & 0xFF;
        if ( v12 == 1 )
        {
          LOWORD(v12) = 0;
          BlendPalette(16 * (v2 + 5) + 1, 3u, v10, 0x7FFF);
          if ( v10 || v8 != 4 )
          {
            v10 = (v10 + 2) & 0xFF;
            if ( v10 > 0xD )
            {
              LOWORD(v10) = 0;
              v8 = (v8 + 1) & 0xFF;
            }
          }
          else
          {
            *(_WORD *)v5 = 0;
          }
        }
      }
      else if ( v6 != 2 && v6 != 4 )
      {
        if ( v6 == 3 )
        {
          v12 = (v12 + 1) & 0xFF;
          if ( v12 == 12 )
          {
            LOWORD(v12) = 0;
            v15 = 16 * (v2 + 5);
            v16 = v15 + 1;
            BlendPalette(v15 + 1, 3u, v10, 0);
            v10 = (v10 + 1) & 0xFF;
            if ( v10 == 5 )
            {
              v17 = *(_WORD *)(2 * v16 + 0x202EAC8);
              v40000D4 = *(_WORD *)(2 * v16 + 0x202EEC8);
              v40000D8 = v17;
              v40000DC = -2147483645;
              *(_WORD *)(&byte_3004B28[v26] + v27) = 0;
            }
          }
        }
      }
      else
      {
        v12 = (v12 + 1) & 0xFF;
        if ( v12 == 3 )
        {
          LOWORD(v12) = 0;
          BlendPalette(16 * (v2 + 5) + 1, 3u, v10, gUnknown_083CC5A4[v2]);
          if ( v10 || v8 != 2 )
          {
            v10 = (v10 + 1) & 0xFF;
            if ( v10 == 14 )
            {
              LOWORD(v10) = 0;
              v13 = (v8 + 1) & 0xFF;
              v8 = (v8 + 1) & 0xFF;
              if ( v6 == 4 && v13 == 1 )
              {
                v14 = 16 * (v2 + 9);
                BlendPalette(v14 + 2, 1u, 4u, 0);
                BlendPalette(v14 + 5, 1u, 4u, 0);
              }
            }
          }
          else
          {
            *(_WORD *)v5 = 0;
          }
        }
      }
      *(_WORD *)(&byte_3004B28[2 * v28] + v27) = v8;
      *(_WORD *)(&byte_3004B28[2 * v29] + v27) = v10;
      *(_WORD *)(&byte_3004B28[2 * v30] + v27) = v12;
      v1 = dword_3004B20;
    }
    v25 = (v25 + 1) & 0xFF;
  }
  while ( v25 <= 3 );
  v18 = 0;
  v19 = 8 * (v31 + v24);
  v20 = (int)(v1 + 2);
  for ( i = (_WORD *)(v19 + v20); !*i; i = (_WORD *)(8 * v18 + v19 + v20) )
  {
    v18 = (v18 + 1) & 0xFF;
    if ( v18 > 3 )
      break;
  }
  if ( v18 == 4 )
  {
    v22 = 0;
    do
    {
      *(_BYTE *)(4 * v22 + 0x201933A) &= 0xFDu;
      v22 = (v22 + 1) & 0xFF;
    }
    while ( v22 <= 3 );
    DestroyTask(v24);
  }
  return v32;
}
