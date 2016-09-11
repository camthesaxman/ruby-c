signed int sub_80EA050()
{
  int v0; // r0@6
  int v1; // r0@8
  signed int result; // r0@10

  if ( v20010BE > 4u )
  {
def_80EA066:
    result = 0;
  }
  else
  {
    switch ( v20010BE )
    {
      case 0u:
        nullsub_23();
        sub_80EA764();
        goto _080EA0C4;
      case 1u:
        if ( !(sub_80EA1E0(v20010BE) << 24) )
          goto def_80EA066;
        sub_80EA7F4();
        goto _080EA0C4;
      case 2u:
        v0 = sub_80E9108(1);
        if ( !(sub_80EA1E0(v0) << 24) )
          goto def_80EA066;
        sub_80EA8BC();
        goto _080EA0C4;
      case 3u:
        v1 = sub_80E9108(1);
        if ( !(sub_80EA1E0(v1) << 24) )
          goto def_80EA066;
_080EA0C4:
        ++v20010BE;
        goto def_80EA066;
      case 4u:
        result = 1;
        break;
      default:
        goto def_80EA066;
    }
  }
  return result;
}
