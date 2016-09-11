int __fastcall ShiftGlyphTile_ShadowedFont_Width5(int a1, int a2, int a3, int a4)
{
  char *v4; // r3@1
  unsigned int v5; // r7@1
  unsigned int v6; // r6@1
  unsigned int v7; // r7@1
  unsigned int v8; // r6@1
  unsigned int v9; // r7@1
  unsigned int v10; // r6@1
  unsigned int v11; // r7@1
  unsigned int v12; // r6@1
  unsigned int v13; // r7@1
  unsigned int v14; // r6@1
  unsigned int v15; // r7@1
  unsigned int v16; // r6@1
  unsigned int v17; // r7@1
  unsigned int v18; // r5@1
  unsigned int v19; // r7@1
  int v21; // [sp+14h] [bp-4h]@0

  v4 = (char *)&sGlyphShiftAmounts + (8 * a4 & 0x7FF);
  v5 = *(_DWORD *)(4 * (*(_DWORD *)a2 & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((*(_DWORD *)a2 >> 4) & 0xF) + a3) | (*(_DWORD *)(4 * ((*(_DWORD *)a2 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int8)(*(_WORD *)a2 >> 8) >> 4) + a3) << 12) | (*(_DWORD *)(4 * ((*(_DWORD *)a2 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)a1 |= v5 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 32) |= v5 >> *((_DWORD *)v4 + 1);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 4) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v6 >> 4) + a3) | (*(_DWORD *)(4 * ((v6 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v6 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v6 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 4) |= v7 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 36) |= v7 >> *((_DWORD *)v4 + 1);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 8) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v8 >> 4) + a3) | (*(_DWORD *)(4 * ((v8 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v8 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v8 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 8) |= v9 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 40) |= v9 >> *((_DWORD *)v4 + 1);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 12) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v10 >> 4) + a3) | (*(_DWORD *)(4 * ((v10 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v10 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v10 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 12) |= v11 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 44) |= v11 >> *((_DWORD *)v4 + 1);
  v12 = *(_DWORD *)(a2 + 16);
  v13 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 16) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v12 >> 4) + a3) | (*(_DWORD *)(4 * ((v12 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v12 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v12 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 16) |= v13 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 48) |= v13 >> *((_DWORD *)v4 + 1);
  v14 = *(_DWORD *)(a2 + 20);
  v15 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 20) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v14 >> 4) + a3) | (*(_DWORD *)(4 * ((v14 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v14 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v14 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 20) |= v15 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 52) |= v15 >> *((_DWORD *)v4 + 1);
  v16 = *(_DWORD *)(a2 + 24);
  v17 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 24) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v16 >> 4) + a3) | (*(_DWORD *)(4 * ((v16 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v16 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v16 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 24) |= v17 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 56) |= v17 >> *((_DWORD *)v4 + 1);
  v18 = *(_DWORD *)(a2 + 28);
  v19 = *(_DWORD *)(4 * (*(_DWORD *)(a2 + 28) & 0xF) + a3) | 16 * *(_DWORD *)(4 * ((unsigned __int8)v18 >> 4) + a3) | (*(_DWORD *)(4 * ((v18 >> 8) & 0xF) + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int16)v18 >> 12) + a3) << 12) | (*(_DWORD *)(4 * ((v18 >> 16) & 0xF) + a3) << 16);
  *(_DWORD *)(a1 + 28) |= v19 << *(_DWORD *)v4;
  *(_DWORD *)(a1 + 60) |= v19 >> *((_DWORD *)v4 + 1);
  return v21;
}
