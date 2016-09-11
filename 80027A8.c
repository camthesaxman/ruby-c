signed int __fastcall AddSubspritesToOamBuffer(int a1, int a2, _BYTE *a3)
{
  _BYTE *v3; // r8@1
  int v5; // r7@3
  int v6; // r1@5
  int v7; // r10@6
  unsigned int v8; // r9@6
  int v9; // r6@9
  int v10; // r2@9
  int v11; // r4@9
  int v12; // r5@9
  int v13; // r3@13
  int v14; // r1@13
  int v15; // [sp+0h] [bp-3Ch]@1
  __int16 v16; // [sp+4h] [bp-38h]@6
  int v17; // [sp+8h] [bp-34h]@6
  unsigned int v18; // [sp+Ch] [bp-30h]@6
  int v19; // [sp+10h] [bp-2Ch]@6
  __int16 v20; // [sp+14h] [bp-28h]@7

  v15 = a2;
  v3 = a3;
  if ( *a3 >= (unsigned int)(unsigned __int8)gOamLimit )
    return 1;
  v5 = *(_DWORD *)(a1 + 24) + (8 * *(_BYTE *)(a1 + 66) & 0x1FF);
  if ( v5 && *(_DWORD *)(v5 + 4) )
  {
    v16 = *(_WORD *)(a1 + 4) & 0x3FF;
    v18 = *(_BYTE *)v5;
    v19 = (*(_BYTE *)(a1 + 3) << 26 >> 30) & 1;
    v7 = (*(_BYTE *)(a1 + 3) << 26 >> 31) & 1;
    v17 = (*(_BYTE *)a1 - *(_BYTE *)(a1 + 41)) & 0xFFFF;
    v8 = 0;
    if ( v18 > 0 )
    {
      v20 = (*(_WORD *)(a1 + 2) & 0x1FF) - *(_BYTE *)(a1 + 40);
      while ( *v3 < (unsigned int)(unsigned __int8)gOamLimit )
      {
        v9 = 8 * v8;
        v10 = 8 * v8 + *(_DWORD *)(v5 + 4);
        LOWORD(v11) = *(_WORD *)v10;
        LOWORD(v12) = *(_WORD *)(v10 + 2);
        if ( v19 )
          v11 = 0xFFFF
              * (((signed __int16)v11 + *(&sOamDimensions[*(_BYTE *)(v10 + 4) & 0xC] + (16 * *(_BYTE *)(v10 + 4) & 0x3F))) & 0xFFFF) & 0xFFFF;
        if ( v7 )
          v12 = 0xFFFF
              * (((signed __int16)v12
                + *(&sOamDimensions[(16 * *(_BYTE *)(v10 + 4) & 0x3F) + 1] + (*(_BYTE *)(v10 + 4) & 0xC))) & 0xFFFF) & 0xFFFF;
        v13 = v9 + v15;
        v14 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)v13 = *(_DWORD *)a1;
        *(_DWORD *)(v13 + 4) = v14;
        *(_BYTE *)(v13 + 1) = *(_BYTE *)(v13 + 1) & 0x3F | (*(_BYTE *)(v9 + *(_DWORD *)(v5 + 4) + 4) << 6);
        *(_BYTE *)(v13 + 3) = *(_BYTE *)(v13 + 3) & 0x3F | ((unsigned int)*(_BYTE *)(v9 + *(_DWORD *)(v5 + 4) + 4) << 28 >> 30 << 6);
        *(_WORD *)(v13 + 2) = *(_WORD *)(v13 + 2) & 0xFE00 | (v20 + v11) & 0x1FF;
        *(_BYTE *)v13 = v17 + v12;
        *(_WORD *)(v13 + 4) = *(_WORD *)(v13 + 4) & 0xFC00 | (v16
                                                            + ((unsigned int)*(_WORD *)(v9 + *(_DWORD *)(v5 + 4) + 4) << 18 >> 22)) & 0x3FF;
        if ( (*(_BYTE *)(a1 + 66) & 0xC0) != 128 )
          *(_BYTE *)(v13 + 5) = *(_BYTE *)(v13 + 5) & 0xF3 | 4 * (*(_BYTE *)(v9 + *(_DWORD *)(v5 + 4) + 5) >> 6);
        v8 = (v8 + 1) & 0xFF;
        ++*v3;
        if ( v8 >= v18 )
          return 0;
      }
      return 1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)v15 = *(_DWORD *)a1;
    *(_DWORD *)(v15 + 4) = v6;
    ++*a3;
  }
  return 0;
}
