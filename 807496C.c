unsigned int UpdateHardwarePaletteFade()
{
  unsigned int v1; // r3@6
  int v2; // r0@7
  __int16 v3; // r3@7
  int v4; // r2@8

  if ( !(v202F38F & 0x80) )
    return 0;
  if ( (unsigned int)v202F38C << 26 < (unsigned int)v202F390 << 26 )
  {
    v202F38C = v202F38C & 0xC0 | ((v202F38C & 0x3F) + 1) & 0x3F;
    return 2;
  }
  v202F38C &= 0xC0u;
  if ( v202F390 & 0x40 )
  {
    v4 = v202F38C;
    v202F38C = v4 & 0xF83F | (((((unsigned int)(v4 << 21) >> 27) - 1) & 0x1F) << 6);
    if ( (signed int)(((unsigned int)(v4 << 21) >> 27) - 1) < (signed int)((unsigned int)v202F38D >> 3) )
    {
      v202F391 = v202F391 & 0xF7 | 8 * ((((unsigned int)v202F391 << 28 >> 31) + 1) & 1);
      v2 = ((((v4 & 0xFFFFF83F | (((((unsigned int)(v4 << 21) >> 27) - 1) & 0x1F) << 6)) << 21 >> 27) + 1) & 0x1F) << 6;
      v3 = (v4 & 0xF83F | (((((unsigned int)(v4 << 21) >> 27) - 1) & 0x1F) << 6)) & 0xF83F;
      goto LABEL_10;
    }
  }
  else
  {
    v1 = (unsigned __int16)(v202F38C & 0xF83F) | (((((unsigned int)v202F38C << 21 >> 27) + 1) & 0x1F) << 6);
    v202F38C = v202F38C & 0xF83F | (((((unsigned int)v202F38C << 21 >> 27) + 1) & 0x1F) << 6);
    if ( v1 << 21 >> 27 > (unsigned int)v202F38D >> 3 )
    {
      v202F391 = v202F391 & 0xF7 | 8 * ((((unsigned int)v202F391 << 28 >> 31) + 1) & 1);
      v2 = (((v1 << 21 >> 27) - 1) & 0x1F) << 6;
      v3 = v1 & 0xF83F;
LABEL_10:
      v202F38C = v3 | v2;
      goto LABEL_11;
    }
  }
LABEL_11:
  if ( v202F391 & 8 )
  {
    if ( v202F391 & 4 )
    {
      v202F388 = 0;
      v202F38C &= 0xF83Fu;
    }
    v202F391 &= 0xFBu;
  }
  return (unsigned int)v202F38F >> 7;
}
