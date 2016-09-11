int __fastcall PrintGlyph_TextMode1(int a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a1;
  call_via_r2(a1, a2, *(&sWriteGlyphTilemapFuncs + *(_BYTE *)(a1 + 1)));
  *(_BYTE *)(v2 + 16) += 8;
  return v4;
}
