signed int sub_80E9EA8()
{
  signed int result; // r0@10

  if ( v20010BE > 5u )
  {
def_80E9EC0:
    result = 0;
  }
  else
  {
    switch ( v20010BE )
    {
      case 0u:
        sub_80EA24C();
        ++v20010BE;
        goto _080E9EF4;
      case 1u:
_080E9EF4:
        if ( !(sub_80EA1E0() << 24) )
          goto def_80E9EC0;
        sub_80EA4A4();
        goto _080E9F3A;
      case 2u:
        if ( !(sub_80EA1E0() << 24) )
          goto def_80E9EC0;
        sub_80EA704();
        goto _080E9F3A;
      case 3u:
        if ( !(sub_80EA1E0() << 24) )
          goto def_80E9EC0;
        goto _080E9F3A;
      case 4u:
_080E9F3A:
        ++v20010BE;
        goto def_80E9EC0;
      case 5u:
        result = 1;
        break;
      default:
        goto def_80E9EC0;
    }
  }
  return result;
}
