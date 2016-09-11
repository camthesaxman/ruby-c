int __fastcall sub_80BF588(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r5@1
  unsigned __int8 i; // r0@3
  int v4; // r3@4
  int v5; // r1@5
  int v6; // r6@5
  int v7; // r7@5
  int v8; // r6@5
  int v9; // r7@5
  int v10; // r6@5
  int v11; // r7@5
  signed int v12; // r5@9
  int v13; // r1@10
  int v14; // r0@10
  unsigned int j; // r0@11
  int v16; // r3@12
  int v17; // r1@13
  int v18; // r6@13
  int v19; // r7@13
  int v20; // r6@13
  int v21; // r7@13
  int v22; // r6@13
  int v23; // r7@13
  unsigned int v24; // r2@15
  int v26; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    if ( !*(_BYTE *)(36 * v2 + v1) )
    {
      for ( i = v2 + 1; i <= 4u; ++i )
      {
        v4 = 36 * i + v1;
        if ( *(_BYTE *)v4 )
        {
          v5 = 36 * v2 + v1;
          v6 = *(_DWORD *)(v4 + 4);
          v7 = *(_DWORD *)(v4 + 8);
          *(_DWORD *)v5 = *(_DWORD *)v4;
          *(_DWORD *)(v5 + 4) = v6;
          *(_DWORD *)(v5 + 8) = v7;
          v5 += 12;
          v8 = *(_DWORD *)(v4 + 16);
          v9 = *(_DWORD *)(v4 + 20);
          *(_DWORD *)v5 = *(_DWORD *)(v4 + 12);
          *(_DWORD *)(v5 + 4) = v8;
          *(_DWORD *)(v5 + 8) = v9;
          v5 += 12;
          v10 = *(_DWORD *)(v4 + 28);
          v11 = *(_DWORD *)(v4 + 32);
          *(_DWORD *)v5 = *(_DWORD *)(v4 + 24);
          *(_DWORD *)(v5 + 4) = v10;
          *(_DWORD *)(v5 + 8) = v11;
          sub_80BF55C(v1, i);
          break;
        }
      }
    }
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  v12 = 5;
  do
  {
    v13 = 36 * v12;
    v14 = *(_BYTE *)(36 * v12++ + v1);
    if ( !v14 )
    {
      for ( j = v12 << 24; ; j = ((j >> 24) + 1) << 24 )
      {
        v24 = j >> 24;
        if ( j >> 24 > 0x17 )
          break;
        v16 = 36 * v24 + v1;
        if ( *(_BYTE *)v16 )
        {
          v17 = v13 + v1;
          v18 = *(_DWORD *)(v16 + 4);
          v19 = *(_DWORD *)(v16 + 8);
          *(_DWORD *)v17 = *(_DWORD *)v16;
          *(_DWORD *)(v17 + 4) = v18;
          *(_DWORD *)(v17 + 8) = v19;
          v17 += 12;
          v20 = *(_DWORD *)(v16 + 16);
          v21 = *(_DWORD *)(v16 + 20);
          *(_DWORD *)v17 = *(_DWORD *)(v16 + 12);
          *(_DWORD *)(v17 + 4) = v20;
          *(_DWORD *)(v17 + 8) = v21;
          v17 += 12;
          v22 = *(_DWORD *)(v16 + 28);
          v23 = *(_DWORD *)(v16 + 32);
          *(_DWORD *)v17 = *(_DWORD *)(v16 + 24);
          *(_DWORD *)(v17 + 4) = v22;
          *(_DWORD *)(v17 + 8) = v23;
          sub_80BF55C(33717868, v24);
          break;
        }
      }
    }
    v12 = (unsigned __int8)v12;
  }
  while ( (unsigned __int8)v12 <= 0x17u );
  return v26;
}
