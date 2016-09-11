int __fastcall ShiftGlyphTile_UnshadowedFont_Width3(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  char *v5; // r7@1
  unsigned int v6; // r5@1
  unsigned int v7; // r2@2
  unsigned int v8; // r3@2
  int v9; // r2@2
  int v11; // [sp+14h] [bp-4h]@0

  v4 = a3;
  v5 = (char *)&sGlyphShiftAmounts + (8 * a4 & 0x7FF);
  v6 = 0;
  do
  {
    v7 = *(_BYTE *)(a2 + v6) << 24;
    v8 = *(_DWORD *)(4 * ((v7 >> 31) & 1) + v4) | 16 * *(_DWORD *)(4 * ((v7 >> 30) & 1) + v4) | (*(_DWORD *)(4 * ((v7 >> 29) & 1) + v4) << 8) | (*(_DWORD *)(4 * ((v7 >> 28) & 1) + v4) << 12);
    v9 = 4 * v6 + a1;
    *(_DWORD *)v9 |= v8 << *(_DWORD *)v5;
    *(_DWORD *)(v9 + 32) |= v8 >> *((_DWORD *)v5 + 1);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 7 );
  return v11;
}
