int __fastcall PrintGlyph_TextMode0(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = DrawGlyph_TextMode0();
  AddToCursorX(v1, v2);
  if ( *(_BYTE *)(v1 + 11) )
    ClipRight(v1);
  return v4;
}
