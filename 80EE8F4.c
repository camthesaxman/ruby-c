int sub_80EE8F4()
{
  int v0; // r0@9
  int v2; // [sp+8h] [bp-4h]@0

  if ( v2000304 == 1 )
  {
    if ( !(v202F38F & 0x80) )
    {
      sub_80F3130(0);
      v0 = sub_80F2D6C(2);
      sub_80F6FFC(v0);
_080EE94C:
      ++v2000304;
      return v2;
    }
  }
  else
  {
    if ( (signed int)v2000304 <= 1 )
    {
      if ( v2000304 )
        return v2;
      BeginNormalPaletteFade(v2000308, -1, 0, 0x10u, 0);
      goto _080EE94C;
    }
    if ( v2000304 == 2 )
      sub_80EBDBC((int)sub_80EC00C);
  }
  return v2;
}
