int __fastcall sub_806DE50(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  unsigned int v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a2 << 24;
  if ( v3 >> 24 <= 5 )
  {
    switch ( v3 >> 24 )
    {
      case 0u:
        LOWORD(dword_3004B20[10 * a1 + 2]) = LOBYTE(dword_3004B20[10 * a1 + 2]) | (unsigned __int16)(a3 << 8);
        break;
      case 1u:
        LOWORD(dword_3004B20[10 * a1 + 2]) = dword_3004B20[10 * a1 + 2] & 0xFF00 | a3;
        break;
      case 2u:
        HIWORD(dword_3004B20[10 * a1 + 2]) = BYTE2(dword_3004B20[10 * a1 + 2]) | (unsigned __int16)(a3 << 8);
        break;
      case 3u:
        HIWORD(dword_3004B20[10 * a1 + 2]) = HIWORD(dword_3004B20[10 * a1 + 2]) & 0xFF00 | a3;
        break;
      case 4u:
        LOWORD(dword_3004B20[10 * a1 + 3]) = LOBYTE(dword_3004B20[10 * a1 + 3]) | (unsigned __int16)(a3 << 8);
        break;
      case 5u:
        LOWORD(dword_3004B20[10 * a1 + 3]) = dword_3004B20[10 * a1 + 3] & 0xFF00 | a3;
        break;
      default:
        return v5;
    }
  }
  return v5;
}
