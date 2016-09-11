signed int sub_80E9F50()
{
  signed int result; // r0@9

  if ( v20010BE > 6u )
  {
def_80E9F66:
    result = 0;
  }
  else
  {
    switch ( v20010BE )
    {
      case 0u:
        nullsub_23();
        sub_80EA764();
        goto _080E9FA0;
      case 2u:
        sub_80EA5A0();
        goto _080E9FA0;
      case 4u:
        sub_80EA348();
_080E9FA0:
        ++v20010BE;
        goto _080E9FAC;
      case 1u:
      case 3u:
      case 5u:
_080E9FAC:
        if ( sub_80EA1E0() << 24 )
          ++v20010BE;
        goto def_80E9F66;
      case 6u:
        result = 1;
        break;
      default:
        goto def_80E9F66;
    }
  }
  return result;
}
