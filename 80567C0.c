signed int __fastcall GetMapBorderIdAt(int a1, int a2)
{
  signed int result; // r0@10

  if ( a1 < 0 || a1 >= dword_3004870 || a2 < 0 || a2 >= dword_3004874 )
  {
    if ( (*(_WORD *)(2 * (((a1 + 1) & 1) + 2 * ((a2 + 1) & 1)) + *(_DWORD *)(v202E828 + 8)) | 0xC00) != 1023 )
      goto _08056824;
    return -1;
  }
  if ( *(_WORD *)(2 * (a1 + dword_3004870 * a2) + dword_3004878) == 1023 )
    return -1;
_08056824:
  if ( a1 >= dword_3004870 - 8 )
  {
    if ( v202E850 & 8 )
      return 4;
    return -1;
  }
  if ( a1 <= 6 )
  {
    if ( v202E850 & 4 )
      return 3;
    return -1;
  }
  if ( a2 >= dword_3004874 - 7 )
  {
    if ( v202E850 & 1 )
      return 1;
    return -1;
  }
  if ( a2 > 6 )
  {
    result = 0;
  }
  else
  {
    if ( !(v202E850 & 2) )
      return -1;
    result = 2;
  }
  return result;
}
