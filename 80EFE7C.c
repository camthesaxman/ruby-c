int sub_80EFE7C()
{
  char v0; // r0@17
  int v2; // [sp+4h] [bp-4h]@0

  if ( v200769D == 1 )
  {
    ++v200769A;
    if ( v200769A <= 0x78u )
      return v2;
    v0 = 0;
    v200769A = 0;
_080EFF2C:
    v200769D = v0;
    return v2;
  }
  if ( (signed int)v200769D > 1 )
  {
    if ( v200769D != 2 )
      return v2;
    sub_80EFDE4();
    v0 = 1;
    goto _080EFF2C;
  }
  if ( v200769D )
    return v2;
  ++v200769C;
  if ( v200769C > 0x3Bu )
    v200769C = 0;
  sub_80EFDE4();
  if ( v200769C == 15 )
    goto _080EFEE4;
  if ( (signed int)v200769C <= 15 )
  {
    if ( v200769C )
      return v2;
    goto _080EFEE4;
  }
  if ( v200769C == 30 || v200769C == 45 )
  {
_080EFEE4:
    v200769D = 1;
    v200769A = 0;
  }
  return v2;
}
