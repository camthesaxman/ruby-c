signed int __fastcall sub_80F162C(char a1)
{
  if ( v2008764 == 1 )
  {
    LZ77UnCompVram(&gUnknown_08E9FF58, 100722688);
  }
  else if ( (signed int)v2008764 > 1 )
  {
    if ( v2008764 != 2 )
    {
      if ( v2008764 == 3 )
      {
        if ( a1 )
          LoadPalette((int)&gUnknown_083E0144, 208, 32);
        else
          LoadPalette((int)&gUnknown_083E0124, 208, 32);
        v2008766 = -80;
        v4000008 = 7437;
        ++v2008764;
      }
      return 0;
    }
    v40000D4 = &gPokenavRibbonPokeView_Gfx;
    v40000D8 = 100720640;
    v40000DC = -2147483536;
  }
  else if ( v2008764 )
  {
    return 0;
  }
  ++v2008764;
  return 1;
}
