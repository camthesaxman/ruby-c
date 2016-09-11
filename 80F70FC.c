signed int sub_80F70FC()
{
  signed int v0; // r0@3
  _BYTE *v1; // r4@6
  signed int result; // r0@16

  if ( v20087DE > 6u )
  {
def_80F7118:
    result = 0;
  }
  else
  {
    switch ( v20087DE )
    {
      case 0u:
        v0 = sub_80F6ED4();
        goto _080F71F8;
      case 1u:
        sub_80F6E04(0);
        goto _080F7206;
      case 2u:
        sub_80F2F7C(0);
        goto _080F7206;
      case 3u:
        sub_80F700C((_BYTE *)0x2008788, v200876E);
        sub_80F43D4(33589128);
        sub_80F105C();
        sub_80F0FFC(v200876E);
        v1 = (_BYTE *)33589214;
        goto _080F71CC;
      case 4u:
        sub_80F0CD8();
        v200BC95 = 0;
        ++v20087DE;
        goto _080F71BA;
      case 5u:
_080F71BA:
        v1 = (_BYTE *)33602709;
        if ( v200BC95 > 1u )
        {
          ++v20087DE;
_080F71EA:
          if ( !(sub_80F6E9C() << 24) )
          {
            v0 = sub_80F0D5C();
_080F71F8:
            if ( !(v0 << 24) )
_080F7206:
              ++v20087DE;
          }
        }
        else
        {
          sub_80F0D5C();
_080F71CC:
          ++*v1;
        }
        result = 1;
        break;
      case 6u:
        goto _080F71EA;
      default:
        goto def_80F7118;
    }
  }
  return result;
}
