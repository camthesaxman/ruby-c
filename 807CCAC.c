int sub_807CCAC()
{
  int v1; // [sp+0h] [bp-4h]@0

  ++v202FEB3;
  if ( v202FEB3 > 1u )
    v202FEB2 = 0;
  if ( (unsigned int)v202FEB8 - 3 > 0xA )
  {
def_807CCE0:
    if ( !(v202F38F & 0x80) )
    {
      v202FEA8 = v202FEA9;
_0807CDB0:
      v202FEAE = 3;
    }
  }
  else
  {
    switch ( v202FEB8 )
    {
      case 3u:
      case 4u:
      case 5u:
      case 0xBu:
      case 0xDu:
        if ( !(sub_807CDC4() << 24) )
        {
          v202FEA8 = 3;
          v202FEAE = 3;
        }
        return v1;
      case 0xCu:
        if ( sub_807CE24() << 24 )
          return v1;
        v202FEA8 = -6;
        goto _0807CDB0;
      case 6u:
        if ( !(sub_807CE7C() & 0xFF) )
        {
          v202FEA8 = 0;
          v202FEAE = 3;
        }
        break;
      default:
        goto def_807CCE0;
    }
  }
  return v1;
}
