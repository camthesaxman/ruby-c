int __fastcall GetSpritePaletteTagByPaletteNum(int a1)
{
  return *(unsigned __int16 *)((char *)sSpritePaletteTags + (2 * a1 & 0x1FF));
}
