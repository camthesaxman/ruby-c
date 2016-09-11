signed int sub_80F3724()
{
  if ( v2000306 == 1 )
  {
    sub_80F379C();
    ++v2000306;
    goto _080F376E;
  }
  if ( (signed int)v2000306 > 1 )
  {
    if ( v2000306 != 2 )
      return 0;
_080F376E:
    if ( sub_80F37D0() << 24 )
      return 1;
    goto _080F377E;
  }
  if ( v2000306 )
    return 0;
  LZ77UnCompWram(&gUnknown_083E3D00, 33593420);
_080F377E:
  ++v2000306;
  return 1;
}
