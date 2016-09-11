int __fastcall ClearWindowTextLines_TextMode0_TextMode1(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  unsigned int v3; // r6@1
  unsigned int v4; // r5@1
  int v5; // r1@1
  char v6; // r0@1
  unsigned int v7; // r2@2
  unsigned __int8 i; // r3@2
  int v10; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  v4 = GetCursorTilemapPointer(a1);
  v5 = ((*(_BYTE *)(v2 + 6) << 12) | GetBlankTileNum(v2)) & 0xFFFF;
  v6 = 0;
  do
  {
    v7 = 0;
    for ( i = v6 + 1; v7 < v3; v7 = (v7 + 1) & 0xFF )
      *(_WORD *)(2 * v7 + v4) = v5;
    v4 += 64;
    ++v6;
  }
  while ( i <= 3u );
  return v10;
}
