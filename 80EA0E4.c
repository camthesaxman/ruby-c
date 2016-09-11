signed int sub_80EA0E4()
{
  int v0; // r0@4
  int v1; // r0@6
  signed int result; // r0@10

  if ( v20010BE > 4u )
  {
def_80EA0FA:
    result = 0;
  }
  else
  {
    switch ( v20010BE )
    {
      case 0u:
        sub_80EA948();
        ++v20010BE;
        goto _080EA128;
      case 1u:
_080EA128:
        v0 = sub_80E9108(-1);
        if ( !(sub_80EA1E0(v0) << 24) )
          goto def_80EA0FA;
        sub_80EAA44();
        goto _080EA166;
      case 2u:
        v1 = sub_80E9108(-1);
        if ( !(sub_80EA1E0(v1) << 24) )
          goto def_80EA0FA;
        sub_80EA704();
        goto _080EA166;
      case 3u:
        if ( !(sub_80EA1E0(v20010BE) << 24) )
          goto def_80EA0FA;
_080EA166:
        ++v20010BE;
        goto def_80EA0FA;
      case 4u:
        result = 1;
        break;
      default:
        goto def_80EA0FA;
    }
  }
  return result;
}
