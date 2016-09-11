int sub_80EDE70()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2000304 == 1 )
  {
    if ( !(v202F38F & 0x80) )
    {
      sub_80F3130(0);
      sub_80F2D6C(2);
_080EDEC4:
      ++v2000304;
      return v1;
    }
  }
  else
  {
    if ( (signed int)v2000304 <= 1 )
    {
      if ( v2000304 )
        return v1;
      BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
      goto _080EDEC4;
    }
    if ( v2000304 == 2 )
      sub_80EBDBC((int)sub_80EC00C);
  }
  return v1;
}
