signed int __fastcall sub_80657A8(int a1, unsigned __int16 a2, char a3, char a4, char a5)
{
  int v5; // r9@1
  unsigned int v6; // r8@1
  char v7; // r7@1
  char v8; // r6@1
  signed int result; // r0@2

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  killram();
  if ( v6 > 0x3E3 )
  {
    result = 0;
  }
  else
  {
    v2028DC8 = 51;
    v2028DC9 = v7;
    v2028DCA = v8;
    v2028DCB = a5;
    memcpy(33721804, v5, v6);
    v2028DC4 = sub_8065760();
    result = 1;
  }
  return result;
}
