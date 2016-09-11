int __fastcall sub_8072484(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, int a6, int a7)
{
  int v7; // r9@1
  char v8; // r0@1

  v7 = a4;
  byte_30006B5 = a5;
  byte_30006B6 = a3 / a5;
  InitMenu(0, a1, a2, a3);
  v8 = 0;
  if ( a7 )
    v8 = -1;
  byte_30006B7 = v8;
  return v7;
}
