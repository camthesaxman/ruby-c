int sub_80E69F8()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v2001008 > 0xDu )
  {
def_80E6A0C:
    sub_80E9368(v2001008);
  }
  else
  {
    switch ( v2001008 )
    {
      default:
        goto def_80E6A0C;
      case 5u:
      case 7u:
      case 8u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        sub_80E9368(v2001008);
        sub_80E8BF4(v200100B, v2001009);
        break;
    }
  }
  return v1;
}
