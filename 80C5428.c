int sub_80C5428()
{
  signed int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)sub_803DAA0();
  if ( v0 == 1 )
    goto _080C5444;
  if ( v0 <= 1 )
  {
    if ( v0 )
      return v2;
    goto _080C5444;
  }
  if ( v0 == 2 )
_080C5444:
    v202E8DC = v0;
  return v2;
}
