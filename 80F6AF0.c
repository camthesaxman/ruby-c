signed int sub_80F6AF0()
{
  signed int result; // r0@13

  if ( v20087DE > 6u )
  {
def_80F6B0C:
    result = 0;
  }
  else
  {
    switch ( v20087DE )
    {
      case 0u:
        if ( !(sub_80F173C() << 24) )
          goto _080F6BCE;
        goto _080F6C18;
      case 1u:
        v4000000 |= 0x2000u;
        sub_80F1480();
        sub_80F66E0();
        goto _080F6BCE;
      case 2u:
        sub_80F1238();
        goto _080F6BCE;
      case 3u:
        sub_80F13FC();
        goto _080F6BCE;
      case 4u:
        sub_80F4824(v200876E, 0);
        ++v20087DE;
        goto _080F6C18;
      case 5u:
        sub_80F2E18(0);
_080F6BCE:
        ++v20087DE;
        goto _080F6C18;
      case 6u:
        if ( !(sub_80F170C() << 24) )
        {
          sub_80F1438();
          v4000000 &= 0xDFFFu;
          ++v20087DE;
          goto def_80F6B0C;
        }
_080F6C18:
        result = 1;
        break;
      default:
        goto def_80F6B0C;
    }
  }
  return result;
}
