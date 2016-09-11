int __fastcall MoveMenuCursor3(char a1)
{
  int v1; // r1@1
  char v2; // r0@2

  v1 = byte_30006B2 + a1;
  if ( v1 >= byte_30006B3 )
  {
    if ( v1 <= byte_30006B4 )
      v2 = a1 + byte_30006B2;
    else
      v2 = byte_30006B3;
  }
  else
  {
    v2 = byte_30006B4;
  }
  byte_30006B2 = v2;
  RedrawMenuCursor(
    (6 * (v2 / (((byte_30006B4 + 1) >> 1) & 0xFF)) + (unsigned __int8)gMenu) & 0xFF,
    (2 * (v2 % (((byte_30006B4 + 1) >> 1) & 0xFF)) + (unsigned __int8)byte_30006B1) & 0xFF);
  return (unsigned __int8)byte_30006B2;
}
