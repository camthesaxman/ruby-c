int __fastcall DrawGlyph_TextMode2(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = GetGlyphWidth();
  v5 = DrawGlyphTiles(v2, v3, v4);
  UpdateTilemap(v2, v5);
  return v7;
}
