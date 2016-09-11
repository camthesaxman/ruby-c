int __fastcall sub_80FD8CC(int a1)
{
  unsigned int v1; // r5@1
  int v2; // r1@2
  int v3; // r0@3
  unsigned __int16 v4; // r10@3
  unsigned int v5; // r4@4
  unsigned __int16 v6; // r7@4
  int v7; // r3@5
  int v8; // r2@5
  int v9; // r1@9
  int v10; // r0@10
  unsigned __int16 v11; // r10@10
  unsigned int v12; // r4@11
  unsigned __int16 v13; // r7@11
  int v14; // r3@12
  int v15; // r2@12
  int v17; // [sp+0h] [bp-2Ch]@1
  int v18; // [sp+4h] [bp-28h]@1
  unsigned int v19; // [sp+8h] [bp-24h]@1
  int v20; // [sp+28h] [bp-4h]@0

  v1 = (unsigned int)*(_BYTE *)(a1 + 29) >> 3;
  v19 = (unsigned int)*(_BYTE *)(a1 + 30) >> 3;
  v17 = *(_DWORD *)(a1 + 4);
  v18 = *(_DWORD *)(a1 + 16);
  if ( *(_WORD *)(a1 + 22) == 2 )
  {
    v2 = 0;
    if ( v19 > 0 )
    {
      do
      {
        v3 = 0;
        v4 = v2 + 1;
        if ( v1 > 0 )
        {
          do
          {
            v5 = 0;
            v6 = v3 + 1;
            do
            {
              v7 = v18 + ((v3 + v2 * v1) << 6) + 8 * v5;
              v8 = v17 + 2 * 8 * (8 * v2 + v5) * v1 + 16 * v3;
              *(_WORD *)v7 = (*(_WORD *)(v8 + 2) << 8) | *(_WORD *)v8;
              *(_WORD *)(v7 + 2) = (*(_WORD *)(v8 + 6) << 8) | *(_WORD *)(v8 + 4);
              *(_WORD *)(v7 + 4) = (*(_WORD *)(v8 + 10) << 8) | *(_WORD *)(v8 + 8);
              *(_WORD *)(v7 + 6) = (*(_WORD *)(v8 + 14) << 8) | *(_WORD *)(v8 + 12);
              v5 = (v5 + 1) & 0xFFFF;
            }
            while ( v5 <= 7 );
            v3 = (unsigned __int16)(v3 + 1);
          }
          while ( v6 < v1 );
        }
        v2 = (unsigned __int16)(v2 + 1);
      }
      while ( v4 < v19 );
    }
  }
  else
  {
    v9 = 0;
    if ( v19 > 0 )
    {
      do
      {
        v10 = 0;
        v11 = v9 + 1;
        if ( v1 > 0 )
        {
          do
          {
            v12 = 0;
            v13 = v10 + 1;
            do
            {
              v14 = v18 + 32 * (v10 + v9 * v1) + 4 * v12;
              v15 = v17 + 2 * 8 * (8 * v9 + v12) * v1 + 16 * v10;
              *(_WORD *)v14 = 16 * *(_WORD *)(v15 + 2) | *(_WORD *)v15 | (*(_WORD *)(v15 + 4) << 8) | (*(_WORD *)(v15 + 6) << 12);
              *(_WORD *)(v14 + 2) = 16 * *(_WORD *)(v15 + 10) | *(_WORD *)(v15 + 8) | (*(_WORD *)(v15 + 12) << 8) | (*(_WORD *)(v15 + 14) << 12);
              v12 = (v12 + 1) & 0xFFFF;
            }
            while ( v12 <= 7 );
            v10 = (unsigned __int16)(v10 + 1);
          }
          while ( v13 < v1 );
        }
        v9 = (unsigned __int16)(v9 + 1);
      }
      while ( v11 < v19 );
    }
  }
  return v20;
}
