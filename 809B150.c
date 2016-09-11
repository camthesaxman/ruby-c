signed int sub_809B150()
{
  _BYTE *v1; // r0@12

  if ( v20012A8 == 1 )
  {
    if ( !(sub_809B324() << 24) )
    {
      v1 = StartSpriteAnim(v20011C0, 3);
      sub_809B384(v1);
_0809B1C8:
      ++v20012A8;
      return 1;
    }
  }
  else
  {
    if ( (signed int)v20012A8 <= 1 )
    {
      if ( v20012A8 )
        return 1;
      if ( v20384E6 )
        return 0;
      StartSpriteAnim(v20011C0, 2);
      goto _0809B1C8;
    }
    if ( v20012A8 != 2 )
    {
      if ( v20012A8 != 3 )
        return 1;
      return 0;
    }
    if ( !(sub_809B358() << 24) )
      goto _0809B1C8;
  }
  return 1;
}
