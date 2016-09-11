int __fastcall ShiftGlyphTile_UnshadowedFont_Width1(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  char *v5; // r5@1
  unsigned int v6; // r4@1
  unsigned int v7; // r3@2
  int v8; // r2@2
  int v10; // [sp+10h] [bp-4h]@0

  v4 = a3;
  v5 = (char *)&sGlyphShiftAmounts + (8 * a4 & 0x7FF);
  v6 = 0;
  do
  {
    v7 = *(_DWORD *)(4 * ((unsigned int)*(_BYTE *)(a2 + v6) >> 7) + v4);
    v8 = 4 * v6 + a1;
    *(_DWORD *)v8 |= *(_DWORD *)(4 * ((unsigned int)*(_BYTE *)(a2 + v6) >> 7) + v4) << *(_DWORD *)v5;
    *(_DWORD *)(v8 + 32) |= v7 >> *((_DWORD *)v5 + 1);
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 7 );
  return v10;
}
