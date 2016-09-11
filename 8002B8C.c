int __fastcall LoadFixedWidthFont_Font4Latin(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  signed int v4; // r5@1
  int v5; // ST00_4@2

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 36) + (32 * a2 & 0x1FFFFF);
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(v2 + 4);
    ApplyColors_ShadowedFont((char *)&gFont4LatinGlyphs + 32 * v4, v3, *(_BYTE *)(v2 + 3), *(_BYTE *)(v2 + 5));
    v3 += 32;
    ++v4;
  }
  while ( v4 <= 255 );
  return (unsigned __int16)v4;
}
