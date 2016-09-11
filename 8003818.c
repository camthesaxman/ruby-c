int __fastcall DrawGlyph_TextMode0(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  unsigned __int8 v4; // r0@1
  int v5; // r4@1
  int v6; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = GetGlyphWidth();
  v5 = v4;
  v6 = DrawGlyphTiles(v2, v3, v4);
  UpdateTilemap(v2, v6);
  return v5;
}
