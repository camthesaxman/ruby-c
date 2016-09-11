int sub_80C6280()
{
  signed int v0; // r0@8
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202FF88 == 2 )
  {
    v0 = 8;
    goto _080C62BA;
  }
  if ( v202FF88 > 2 )
  {
    if ( v202FF88 == 3 )
    {
      v202FF98 = -8;
      v0 = 24;
      goto _080C62BC;
    }
    if ( v202FF88 != 4 )
      return v2;
    v0 = 24;
_080C62BA:
    v202FF98 = v0;
    goto _080C62BC;
  }
  if ( v202FF88 != 1 )
    return v2;
  v202FF98 = 8;
  v0 = 40;
_080C62BC:
  v202FF9C = v0;
  return v2;
}
