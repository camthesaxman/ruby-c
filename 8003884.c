int __fastcall WriteGlyphTilemap_Font1_Font4(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r1@1
  int v4; // r3@1
  int v6; // [sp+4h] [bp-4h]@0

  v2 = 2 * a2;
  v3 = (*(_WORD *)(a1 + 26) + (unsigned __int8)sFontType1Map[2 * a2]) & 0xFFFF;
  v4 = (unsigned __int8)sFontType1Map[v2 + 1];
  WriteGlyphTilemap();
  return v6;
}
