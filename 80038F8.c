int __fastcall PrintGlyph_TextMode2(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)GetGlyphWidth();
  DrawGlyph_TextMode2(v2, v3);
  AddToCursorX(v2, v4);
  if ( *(_BYTE *)(v2 + 11) )
    ClipRight(v2);
  return v6;
}
