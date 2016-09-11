signed int sub_809B24C()
{
  char v0; // r0@9

  if ( v20012A8 == 1 )
  {
    if ( !(sub_809971C() << 24) )
    {
      StartSpriteAnim(v20011C0, 3);
      diegohint1(v20012A9, v20384E5);
      ++v20012A8;
    }
    return 1;
  }
  if ( (signed int)v20012A8 > 1 )
  {
    if ( v20012A8 != 2 )
      return 1;
    return 0;
  }
  if ( v20012A8 )
    return 1;
  if ( !v20384E4 )
  {
    v0 = get_preferred_box();
    goto _0809B2A0;
  }
  if ( v20384E4 != 1 )
    return 0;
  v0 = 14;
_0809B2A0:
  v20012A9 = v0;
  StartSpriteAnim(v20011C0, 2);
  sub_80996B0(v20012A9, v20384E5);
  ++v20012A8;
  return 1;
}
