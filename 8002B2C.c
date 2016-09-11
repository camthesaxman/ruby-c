int __fastcall LoadFixedWidthFont(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  signed int v4; // r4@1

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 36) + (32 * a2 & 0x1FFFFF);
  v4 = 0;
  do
  {
    LoadFixedWidthGlyph(v2, v4, v3);
    v3 += 64;
    ++v4;
  }
  while ( v4 <= 255 );
  return 2 * v4 & 0xFFFF;
}
