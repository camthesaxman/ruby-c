int __fastcall fade_screen(signed int a1, char a2)
{
  char v2; // r5@1
  __int16 v3; // r4@8
  signed int v4; // r1@8
  int v5; // r2@17
  int v7; // [sp+Ch] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v2 = a2;
  if ( (unsigned __int8)a1 == 1 )
  {
    v3 = 0;
_0807D682:
    v4 = 1;
    goto _0807D684;
  }
  if ( a1 > 1 )
  {
    if ( a1 == 2 )
    {
      v3 = -1;
      v4 = 0;
      goto _0807D684;
    }
    if ( a1 != 3 )
      return v7;
    v3 = -1;
    goto _0807D682;
  }
  if ( a1 )
    return v7;
  v3 = 0;
  v4 = 0;
_0807D684:
  v5 = (signed int)v202FEB8 >= 3
    && ((signed int)v202FEB8 <= 6 || (signed int)v202FEB8 <= 13 && (signed int)v202FEB8 >= 11);
  if ( v4 )
  {
    if ( v5 )
      CpuFastSet(33746632, 33745608, 256);
    BeginNormalPaletteFade(-1, v2, 0, 0x10u, v3);
    v202FEAE = 2;
  }
  else
  {
    v202FEAC = v3;
    if ( v5 )
      v202FEAF = 0;
    else
      BeginNormalPaletteFade(-1, v2, 0x10u, 0, v3);
    v202FEAE = 1;
    v202FEB2 = 1;
    v202FEB3 = 0;
    sub_807DB64(v202FF18, v202FF1A);
    v202FEB0 = 1;
  }
  return v7;
}
