int __fastcall MoveMenuCursor(char a1)
{
  int v1; // r2@1
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
  RedrawMenuCursor((unsigned __int8)gMenu, (2 * v2 + (unsigned __int8)byte_30006B1) & 0xFF);
  return (unsigned __int8)byte_30006B2;
}
