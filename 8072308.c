int __fastcall MoveMenuCursor4(char a1)
{
  char v1; // r4@1
  int result; // r0@3

  v1 = a1;
  if ( byte_30006B2 + a1 > byte_30006B4 )
  {
    result = (unsigned __int8)byte_30006B2;
  }
  else if ( (sub_80723D4() & 0xFF) == 1 )
  {
    result = (unsigned __int8)byte_30006B2;
  }
  else
  {
    byte_30006B2 += v1;
    if ( (byte_30006B4 + 1) / (unsigned __int8)byte_30006B5 )
      RedrawMenuCursor(
        ((unsigned __int8)byte_30006B8[byte_30006B2 % (signed int)(unsigned __int8)byte_30006B5] + (unsigned __int8)gMenu) & 0xFF,
        (2 * (byte_30006B2 / (signed int)(unsigned __int8)byte_30006B5) + (unsigned __int8)byte_30006B1) & 0xFF);
    else
      RedrawMenuCursor(
        ((unsigned __int8)byte_30006B8[byte_30006B2 % (signed int)(unsigned __int8)byte_30006B5] + (unsigned __int8)gMenu) & 0xFF,
        (2 * (byte_30006B2 / (signed int)(unsigned __int8)byte_30006B5 % (unsigned __int8)byte_30006B6)
       + (unsigned __int8)byte_30006B1) & 0xFF);
    result = (unsigned __int8)byte_30006B2;
  }
  return result;
}
