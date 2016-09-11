int __fastcall ShiftGlyphTile_UnshadowedFont_Width8(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  char *v5; // r12@1
  unsigned int v6; // r7@1
  int v7; // r4@2
  unsigned int v8; // r3@2
  int v9; // r2@2
  int v11; // [sp+18h] [bp-4h]@0

  v4 = a3;
  v5 = (char *)&sGlyphShiftAmounts + (8 * a4 & 0x7FF);
  v6 = 0;
  do
  {
    v7 = *(_BYTE *)(a2 + v6);
    v8 = *(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 31) & 1) + v4) | 16
                                                                      * *(_DWORD *)(4
                                                                                  * (((unsigned int)(v7 << 24) >> 30) & 1)
                                                                                  + v4) | (*(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 29) & 1) + v4) << 8) | (*(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 28) & 1) + v4) << 12) | (*(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 27) & 1) + v4) << 16) | (*(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 26) & 1) + v4) << 20) | (*(_DWORD *)(4 * (((unsigned int)(v7 << 24) >> 25) & 1) + v4) << 24) | (*(_DWORD *)(4 * (v7 & 1) + v4) << 28);
    v9 = 4 * v6 + a1;
    *(_DWORD *)v9 |= v8 << *(_DWORD *)v5;
    *(_DWORD *)(v9 + 32) |= v8 >> *((_DWORD *)v5 + 1);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 7 );
  return v11;
}
