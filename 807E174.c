int sub_807E174()
{
  _WORD *v0; // r1@4
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202FEB4 > 4u )
  {
def_807E18E:
    sub_807DA4C();
  }
  else
  {
    switch ( v202FEB4 )
    {
      case 0u:
        if ( !v202FEAE )
          return v2;
        v0 = (_WORD *)33750708;
        goto _0807E238;
      case 1u:
        sub_807D9A8();
        v0 = (_WORD *)33750708;
        goto _0807E238;
      case 2u:
        if ( sub_807D9C8() << 24 )
          return v2;
        v0 = (_WORD *)33750708;
        goto _0807E238;
      case 3u:
        sub_807DA14();
        v0 = (_WORD *)33750708;
        goto _0807E238;
      case 4u:
        sub_807DA4C();
        if ( v202FF24 == 6 )
        {
          v202FEBA = 1;
          v0 = (_WORD *)33750708;
_0807E238:
          ++*v0;
        }
        break;
      default:
        goto def_807E18E;
    }
  }
  return v2;
}
