signed int sub_809B1D8()
{
  _BYTE *v0; // r0@8

  if ( v20012A8 == 1 )
  {
    if ( !(sub_809B358() << 24) )
    {
      StartSpriteAnim(v20011C0, 0);
_0809B238:
      ++v20012A8;
      return 1;
    }
  }
  else
  {
    if ( (signed int)v20012A8 <= 1 )
    {
      if ( v20012A8 || sub_809B324() << 24 )
        return 1;
      v0 = StartSpriteAnim(v20011C0, 2);
      sub_809B3E0(v0);
      goto _0809B238;
    }
    if ( v20012A8 == 2 )
      return 0;
  }
  return 1;
}
