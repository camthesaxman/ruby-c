int __fastcall sub_8015150(int a1)
{
  int v1; // r2@1
  _BYTE *v2; // r0@3

  a1 = (unsigned __int8)a1;
  v1 = 0;
  if ( (unsigned __int8)a1 <= 0xAu )
  {
    switch ( a1 )
    {
      case 0:
        v2 = (_BYTE *)33704968;
        goto _080151C6;
      case 1:
        v2 = (_BYTE *)33704967;
        goto _080151C6;
      case 2:
        v2 = (_BYTE *)33704970;
        goto _080151C6;
      case 7:
        return 0;
      case 10:
        v2 = (_BYTE *)33644547;
        goto _080151C6;
      case 3:
      case 5:
        v2 = (_BYTE *)33704969;
_080151C6:
        v1 = *v2;
        break;
      default:
        return v1;
    }
  }
  return v1;
}
