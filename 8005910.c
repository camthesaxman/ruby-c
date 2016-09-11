int __fastcall ShiftGlyphTile_ShadowedFont_Width4(int a1, int a2, int a3, int a4)
{
  char *v4; // r12@1
  unsigned int v5; // r6@1
  unsigned int v6; // r3@2
  int v7; // r4@2
  int v9; // [sp+18h] [bp-4h]@0

  v4 = (char *)&sGlyphShiftAmounts + (8 * a4 & 0x7FF);
  v5 = 0;
  do
  {
    v6 = *(_DWORD *)(4 * (*(_DWORD *)(4 * v5 + a2) & 0xF) + a3) | 16
                                                                * *(_DWORD *)(4
                                                                            * ((*(_DWORD *)(4 * v5 + a2) >> 4) & 0xF)
                                                                            + a3) | (*(_DWORD *)(4
                                                                                               * ((*(_DWORD *)(4 * v5 + a2) >> 8) & 0xF)
                                                                                               + a3) << 8) | (*(_DWORD *)(4 * ((unsigned __int8)(*(_WORD *)(4 * v5 + a2) >> 8) >> 4) + a3) << 12);
    v7 = 4 * v5 + a1;
    *(_DWORD *)v7 |= v6 << *(_DWORD *)v4;
    *(_DWORD *)(v7 + 32) |= v6 >> *((_DWORD *)v4 + 1);
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 7 );
  return v9;
}
