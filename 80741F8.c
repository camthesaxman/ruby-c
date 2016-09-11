signed int UpdateNormalPaletteFade()
{
  unsigned int v1; // r0@4
  int v2; // r5@9
  unsigned int v3; // r4@10
  unsigned int v4; // r4@16
  signed int v5; // r3@20

  if ( !(v202F38F & 0x80) )
    return 0;
  if ( IsSoftwarePaletteFadeFinishing() << 24 )
  {
    v1 = v202F38F;
  }
  else
  {
    if ( !(v202F392 & 4) )
    {
      if ( (unsigned int)v202F38C << 26 < (unsigned int)v202F390 << 26 )
      {
        v202F38C = v202F38C & 0xC0 | ((v202F38C & 0x3F) + 1) & 0x3F;
        return 2;
      }
      v202F38C &= 0xC0u;
    }
    v2 = 0;
    if ( v202F392 & 4 )
    {
      v3 = v202F38A;
      v2 = 256;
    }
    else
    {
      v3 = v202F388;
    }
    for ( ; v3; v2 = (v2 + 16) & 0xFFFF )
    {
      if ( v3 & 1 )
        BlendPalette(v2, 0x10u, (unsigned int)v202F38C << 21 >> 27, v202F38E & 0x7FFF);
      v3 >>= 1;
    }
    v4 = (unsigned __int8)(v202F392 & 0xFB) | 4 * (((unsigned int)v202F392 << 29 >> 31) ^ 1);
    v202F392 = v202F392 & 0xFB | 4 * (((unsigned int)v202F392 << 29 >> 31) ^ 1);
    if ( !(v4 & 4) )
    {
      if ( (unsigned int)v202F38C << 21 >> 27 == (unsigned int)v202F38D << 24 >> 27 )
      {
        v202F388 = v4 & 4;
        v202F392 = v4 | 2;
      }
      else
      {
        if ( v202F390 & 0x40 )
        {
          v5 = (((unsigned int)v202F38C << 21 >> 27) - (v4 << 25 >> 28)) & 0xFF;
          if ( (char)(((unsigned int)v202F38C << 21 >> 27) - (v4 << 25 >> 28)) < (signed int)((unsigned int)v202F38D << 24 >> 27) )
            v5 = (unsigned int)v202F38D << 24 >> 27;
        }
        else
        {
          v5 = (v4 << 25 >> 28) + ((unsigned int)v202F38C << 21 >> 27);
          if ( v5 > (signed int)((unsigned int)v202F38D << 24 >> 27) )
            v5 = (unsigned int)v202F38D << 24 >> 27;
        }
        v202F38C = v202F38C & 0xF83F | ((v5 & 0x1F) << 6);
      }
    }
    v1 = v202F38F;
  }
  return v1 >> 7;
}
