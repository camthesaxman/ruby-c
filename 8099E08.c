signed int sub_8099E08()
{
  unsigned __int8 v0; // r0@10
  int v1; // r0@10

  if ( v2001032 == 1 )
  {
    if ( UpdatePaletteFade() << 24 )
      return 1;
    v0 = get_preferred_box();
    v1 = sub_8099EB0(v0, 0);
    sub_809A654(v1);
    BeginNormalPaletteFade(v2000D08, 1, 0x10u, 0, -1);
_08099E9A:
    ++v2001032;
    return 1;
  }
  if ( (signed int)v2001032 <= 1 )
  {
    if ( v2001032 )
      return 1;
    BeginNormalPaletteFade(v2000D08, 1, 0, 0x10u, -1);
    goto _08099E9A;
  }
  if ( v2001032 == 2 )
  {
    if ( UpdatePaletteFade() << 24 )
      return 1;
    goto _08099E9A;
  }
  if ( v2001032 == 3 )
    return 0;
  return 1;
}
