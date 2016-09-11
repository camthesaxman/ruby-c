int sub_80AA10C()
{
  unsigned int v0; // r5@3
  char *v1; // r1@5
  int v3; // [sp+18h] [bp-4h]@0

  v202F390 |= 0x80u;
  SetVBlankCallback(0);
  sub_80A9F50();
  dp12_8087EA4();
  ResetPaletteFade();
  ResetSpriteData();
  ResetTasks();
  FreeAllSpritePalettes();
  sub_80A9FE4();
  SetVBlankCallback((int)sub_80AA090);
  SetMainCallback2((int)sub_80AA064);
  v202F390 &= 0x7Fu;
  v2038694 = 0;
  if ( !v2038572 )
    sub_80AE398(0, 0);
  sub_80AE098(v2038694);
  v0 = 0;
  do
  {
    sub_8003460(
      33745160,
      gUnknown_083C9364[v0],
      (655360 * v0 + 2752512) >> 16,
      gUnknown_083C9276[2 * v0],
      byte_83C9277[2 * v0]);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  v203869E = 0;
  v203869C = 0;
  sub_80AA5BC(0);
  sub_80AA5E8(v203869E);
  sub_8003460(33745160, (int)&gUnknown_083C9337, 214, 18, 0x12u);
  sub_8003460(33745160, (int)&gUnknown_083C933B, 220, 0, 0xCu);
  LoadSpriteSheet((int)"-’<\b ");
  LoadSpritePalette((int)&gUnknown_083C92BC);
  sub_80AA280(3);
  sub_80AA658(3);
  sub_80AA614(3, 0);
  v1 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83C92CC, 128, 24)];
  *((_WORD *)v1 + 23) = 1;
  *((_WORD *)v1 + 24) = 1;
  *((_WORD *)v1 + 25) = 3;
  *((_WORD *)v1 + 26) = 0;
  return v3;
}
