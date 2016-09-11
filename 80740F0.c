signed int ResetPaletteFadeControl()
{
  signed int result; // r0@1

  v202F388 = 0;
  v202F38C &= 0xC0u;
  v202F38C &= 0xF83Fu;
  v202F38D &= 7u;
  v202F38E &= 0x8000u;
  v202F38F &= 0x7Fu;
  v202F390 = 0;
  v202F391 &= 0xF3u;
  v202F392 &= 0xFDu;
  v202F390 &= 0xFFFE0FFF;
  result = 16;
  v202F392 = v202F392 & 0x83 | 0x10;
  return result;
}
