signed int IsSoftwarePaletteFadeFinishing()
{
  signed int result; // r0@5

  if ( v202F392 & 2 )
  {
    if ( (v202F390 & 0x1F000) == 0x4000 )
    {
      v202F38F &= 0x7Fu;
      v202F392 &= 0xFDu;
      v202F390 &= 0xFFFE0FFF;
    }
    else
    {
      v202F390 = v202F390 & 0xFFFE0FFF | ((((v202F390 << 15 >> 27) + 1) & 0x1F) << 12);
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
