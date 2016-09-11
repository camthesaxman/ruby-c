signed int __fastcall sub_8116E5C(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r0@1
  int v3; // r3@1
  signed int result; // r0@4

  v2 = a1 << 24;
  v3 = v2 >> 24;
  if ( (v2 - 0x1000000) >> 24 > 0x12 )
    goto _08116EF0;
  if ( a2 <= 0xFu )
  {
    switch ( a2 )
    {
      case 0u:
        return 3;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        if ( v3 == a2 + 5 || v3 == a2 + 10 || v3 == a2 + 15 )
          goto _08116EE8;
        goto _08116EF0;
      case 5u:
      case 0xAu:
      case 0xFu:
        if ( v3 >= a2 + 1 && v3 <= a2 + 4 )
          goto _08116EE8;
        goto _08116EF0;
      default:
        break;
    }
  }
  if ( v3 == a2 )
_08116EE8:
    result = 1;
  else
_08116EF0:
    result = 0;
  return result;
}
