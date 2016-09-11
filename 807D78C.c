int __fastcall sub_807D78C(int a1)
{
  unsigned int v1; // r4@1
  int v2; // r4@8
  unsigned int v3; // r2@8
  int v4; // r4@11
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = (((a1 << 16) & 0xFFFFFFu) + 0x100000) >> 16;
  if ( v202FEAE == 1 )
  {
    if ( v202FEB2 )
    {
      if ( v202FEB8 == 6 )
        sub_807D540(v1);
      v2 = 16 * v1 & 0xFFFF;
      v3 = 0;
      do
      {
        *(_WORD *)(2 * (v2 + v3) + 0x202EEC8) = v202FEAC;
        v3 = (v3 + 1) & 0xFFFF;
      }
      while ( v3 <= 0xF );
    }
  }
  else if ( v202FEAE == 2 )
  {
    v4 = 16 * v1 & 0xFFFF;
    CpuFastSet(2 * v4 + 33746632, 2 * v4 + 33745608, 8);
    BlendPalette(v4, 0x10u, (unsigned int)v202F38C << 21 >> 27, v202F38E & 0x7FFF);
  }
  else if ( v202FEB8 == 6 )
  {
    BlendPalette(16 * v1, 0x10u, 0xCu, 29692);
  }
  else
  {
    sub_807CEBC(v1, 1, v202FEA8);
  }
  return v6;
}
