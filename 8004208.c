int __fastcall DoScroll_TextMode2(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  unsigned int v3; // r7@1
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r4@1
  unsigned int v8; // r4@1
  unsigned int i; // r5@1
  __int16 v10; // r1@2
  __int16 v11; // r1@2
  __int16 v12; // r1@2
  __int16 v13; // r1@2
  __int16 v15; // [sp+0h] [bp-30h]@1
  __int16 v16; // [sp+2h] [bp-2Eh]@1
  __int16 v17; // [sp+4h] [bp-2Ch]@1
  __int16 v18; // [sp+6h] [bp-2Ah]@1
  int v19; // [sp+8h] [bp-28h]@1
  int v20; // [sp+Ch] [bp-24h]@1
  int v21; // [sp+2Ch] [bp-4h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 36) + (32 * GetCursorTileNum(a1, 0, -2) & 0x1FFFFF);
  v5 = *(_DWORD *)(v2 + 36) + (32 * GetCursorTileNum(v2, 0, 0) & 0x1FFFFF);
  CpuFastSet(v5, v4, 8 * v3);
  v19 = dword_30003A0;
  CpuFastSet(&v19, v5, 8 * v3 | 0x1000000);
  v6 = 32 * *(_BYTE *)(v2 + 9);
  v7 = v5 + v6;
  CpuFastSet(v7, v4 + v6, 8 * v3);
  v20 = dword_30003A0;
  CpuFastSet(&v20, v7, 8 * v3 | 0x1000000);
  v8 = GetCursorTilemapPointer(v2) - 128;
  v15 = (((unsigned int)*(_BYTE *)(v2 + 18) >> 3)
       + *(_WORD *)(v2 + 28)
       + *(_WORD *)(v2 + 26)
       + (*(_WORD *)(v2 + 20) >> 3) * *(_BYTE *)(v2 + 9)) | (*(_BYTE *)(v2 + 6) << 12);
  v16 = v15 + *(_BYTE *)(v2 + 9);
  v17 = v15 + *(_BYTE *)(v2 + 9) + *(_BYTE *)(v2 + 9);
  v18 = v17 + *(_BYTE *)(v2 + 9);
  for ( i = 0; i < v3; i = (i + 1) & 0xFF )
  {
    v10 = v15++;
    *(_WORD *)v8 = v10;
    v11 = v16++;
    *(_WORD *)(v8 + 64) = v11;
    v12 = v17++;
    *(_WORD *)(v8 + 128) = v12;
    v13 = v18++;
    *(_WORD *)(v8 + 192) = v13;
    v8 += 2;
  }
  return v21;
}
