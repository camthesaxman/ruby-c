signed int __fastcall ball_number_to_ball_processing_index(unsigned __int16 a1)
{
  unsigned int v1; // r0@1
  signed int result; // r0@3

  v1 = a1 - 1;
  if ( v1 > 0xB )
  {
def_813FA28:
    result = 0;
  }
  else
  {
    switch ( v1 )
    {
      case 0u:
        result = 4;
        break;
      case 1u:
        result = 3;
        break;
      case 2u:
        result = 1;
        break;
      case 4u:
        result = 2;
        break;
      case 5u:
        result = 5;
        break;
      case 6u:
        result = 6;
        break;
      case 7u:
        result = 7;
        break;
      case 8u:
        result = 8;
        break;
      case 9u:
        result = 9;
        break;
      case 0xAu:
        result = 10;
        break;
      case 0xBu:
        result = 11;
        break;
      default:
        goto def_813FA28;
    }
  }
  return result;
}
