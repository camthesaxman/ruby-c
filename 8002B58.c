int __fastcall LoadFixedWidthFont_Font1Latin(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  signed int v4; // r4@1

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 36) + (32 * a2 & 0x1FFFFF);
  v4 = 0;
  do
  {
    ApplyColors_UnshadowedFont((char *)&sFont1LatinGlyphs + 8 * v4, v3, *(_BYTE *)(v2 + 3), *(_BYTE *)(v2 + 4));
    v3 += 32;
    ++v4;
  }
  while ( v4 <= 255 );
  return (unsigned __int16)v4;
}
