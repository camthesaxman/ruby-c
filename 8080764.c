signed int __fastcall sub_8080764(int a1)
{
  signed int result; // r0@3
  _BYTE *v2; // r1@17

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 > 0x15u )
  {
def_8080776:
    result = 0;
  }
  else
  {
    switch ( a1 )
    {
      case 1:
        return 1;
      case 2:
        return 2;
      case 3:
        return 3;
      case 4:
        return 4;
      case 5:
        return 5;
      case 6:
        return 6;
      case 7:
        return 7;
      case 8:
        return 8;
      case 9:
        return 9;
      case 10:
        return 10;
      case 11:
        return 11;
      case 12:
        return 12;
      case 13:
        return 13;
      case 14:
        return 14;
      case 20:
        v2 = &gUnknown_0839ACD4;
        break;
      case 21:
        v2 = &gUnknown_0839ACD8;
        break;
      default:
        goto def_8080776;
    }
    result = v2[v2025763];
  }
  return result;
}
