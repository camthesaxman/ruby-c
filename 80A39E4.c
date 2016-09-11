int __fastcall sub_80A39E4(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r9@1
  int v8; // r7@2
  signed int v9; // r7@6
  int v11; // [sp+2Ch] [bp-4h]@0

  v4 = a1;
  a2 = (unsigned __int8)a2;
  v5 = a3;
  v6 = a3;
  v7 = 2 * (unsigned __int8)a2;
  a4 = (char)a4;
  if ( (char)a4 == -1 )
  {
    v8 = 2 * (a2 + 1);
    if ( a2 == 5 )
      v8 = 2;
    sub_809D104(a1, 4, 0xAu, (int)&gUnknown_08E96EC8, (8 - a3) & 0xFFFF, 2 * a2, a3, 2u);
    sub_809D104(v4, v5 + 4, 0xAu, (int)&gUnknown_08E96EC8, 0, v8, (8 - v5) & 0xFFFF, 2u);
  }
  else if ( a4 == 1 )
  {
    v9 = 2 * (a2 - 1) & 0xFFFF;
    if ( a2 == 1 )
      v9 = 10;
    sub_809D104(a1, 4, 0xAu, (int)&gUnknown_08E96EC8, a3, v9, (8 - a3) & 0xFFFF, 2u);
    sub_809D104(v4, (12 - v6) & 0xFFFF, 0xAu, (int)&gUnknown_08E96EC8, 0, v7, v6, 2u);
  }
  return v11;
}
