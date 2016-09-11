signed int sub_8040728()
{
  signed int result; // r0@2

  if ( v20239F8 & 0x1000 )
    return 463;
  if ( v20239F8 & 0x4000 )
    return 462;
  if ( v20239F8 & 2 )
    goto def_8040788;
  if ( !(v20239F8 & 8) )
    return 457;
  if ( (unsigned int)*((_BYTE *)&gTrainers + 40 * v202FF5E + 1) - 2 > 0x31 )
  {
def_8040788:
    result = 459;
  }
  else
  {
    switch ( *((_BYTE *)&gTrainers + 40 * v202FF5E + 1) )
    {
      case 2:
      case 0x31:
        result = 466;
        break;
      case 3:
      case 4:
      case 0x32:
      case 0x33:
        result = 458;
        break;
      case 0x19:
        result = 460;
        break;
      case 0x20:
        result = 461;
        break;
      case 0x2E:
        if ( !StringCompare((_BYTE *)&unk_81F0500 + 40 * v202FF5E, &gUnknown_08400E42) )
          goto def_8040788;
        result = 464;
        break;
      case 0x18:
        result = 465;
        break;
      default:
        goto def_8040788;
    }
  }
  return result;
}
