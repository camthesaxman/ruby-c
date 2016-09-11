unsigned int __fastcall sub_8106EE0(unsigned __int8 a1)
{
  unsigned int result; // r0@2

  if ( a1 > 7u )
    result = *(_BYTE *)(dword_3005E8C + 10) / 3u & 0xFF;
  else
    result = *(_BYTE *)(dword_3005E8C + 10);
  if ( result <= 4 )
  {
    switch ( result )
    {
      case 0u:
        result = 9;
        break;
      case 1u:
        result = 13;
        break;
      case 2u:
        result = 2;
        break;
      case 3u:
        result = 36;
        break;
      case 4u:
        result = 6;
        break;
      default:
        return result;
    }
  }
  return result;
}
