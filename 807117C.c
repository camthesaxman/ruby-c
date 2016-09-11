signed int __fastcall sub_807117C(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // r4@1
  _WORD *v3; // r5@1
  unsigned int v4; // r0@1
  signed int result; // r0@9

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  if ( v4 > 5 )
  {
def_8071194:
    result = 0;
  }
  else
  {
    switch ( v4 )
    {
      case 1u:
        sub_8070FB4();
        goto _080711F6;
      case 2u:
        MenuDrawTextWindow(22, 0, 29, (((unsigned int)v202E8FD << 25) + 50331648) >> 24);
        *v3 = 0;
        goto _080711F6;
      case 3u:
        if ( GetSafariZoneFlag() )
          sub_80710DC();
        goto _080711F6;
      case 4u:
        if ( !sub_8071114(a2, 2) )
          goto def_8071194;
        goto _080711F6;
      case 0u:
_080711F6:
        ++*v2;
        goto def_8071194;
      case 5u:
        v202E8FC = InitMenu(0, 23, 2, v202E8FD);
        result = 1;
        break;
      default:
        goto def_8071194;
    }
  }
  return result;
}
