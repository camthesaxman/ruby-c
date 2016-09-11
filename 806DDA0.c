unsigned int __fastcall sub_806DDA0(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v3; // r0@4

  if ( a2 <= 5u )
  {
    switch ( a2 )
    {
      case 1u:
        return LOBYTE(dword_3004B20[10 * a1 + 2]);
      case 2u:
        v3 = HIWORD(dword_3004B20[10 * a1 + 2]);
        return v3 >> 8;
      case 3u:
        return BYTE2(dword_3004B20[10 * a1 + 2]);
      case 4u:
        v3 = LOWORD(dword_3004B20[10 * a1 + 3]);
        return v3 >> 8;
      case 5u:
        return LOBYTE(dword_3004B20[10 * a1 + 3]);
      default:
        break;
    }
  }
  v3 = LOWORD(dword_3004B20[10 * a1 + 2]);
  return v3 >> 8;
}
