int sub_807E400()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v202FEB4 == 1 )
  {
    if ( !(sub_807E7B4() << 24) )
      goto _0807E44E;
  }
  else
  {
    if ( (signed int)v202FEB4 <= 1 )
    {
      if ( v202FEB4 )
        return v1;
      sub_807E7A4();
      goto _0807E44E;
    }
    if ( v202FEB4 == 2 && !(sub_807E8E8() << 24) )
    {
      v202FEBA = 1;
_0807E44E:
      ++v202FEB4;
      return v1;
    }
  }
  return v1;
}
