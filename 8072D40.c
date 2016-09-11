int __fastcall InitMenu(unsigned __int8 a1, char a2, char a3, char a4, char a5, char a6)
{
  char v6; // r7@1
  char v7; // r8@1
  char v8; // r6@1
  int v9; // r4@1

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = (unsigned __int8)a5;
  if ( a6 )
    sub_8072D18(a1);
  gMenu = v6 - 1;
  byte_30006B1 = v7;
  byte_30006B3 = 0;
  byte_30006B4 = v8 - 1;
  byte_30006B7 = 0;
  if ( (unsigned __int8)a5 > (signed int)byte_30006B4 )
    v9 = 0;
  byte_30006B2 = v9;
  MoveMenuCursor(0);
  return v9;
}
