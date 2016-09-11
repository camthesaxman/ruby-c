int __fastcall sub_8072AB0(int a1, int a2, int a3, char a4, unsigned __int8 a5, int a6)
{
  unsigned int v6; // r4@1
  unsigned int v7; // r5@1
  int v8; // r6@1
  int result; // r0@1
  unsigned int v10; // r6@1

  v6 = a2 << 24;
  v7 = a3 << 16;
  v8 = (unsigned __int8)a4;
  result = sub_8004FD0(v202E9C8, 0, a1, v202E9CE, a2, a3, a4, a6);
  v10 = (unsigned int)(v8 + 7) >> 3;
  if ( (unsigned __int8)result < (((a5 + 7) >> 3) & 0xFFu) )
    result = MenuFillWindowRectWithBlankTile(
               v6 >> 27,
               (v7 >> 19) + 2 * result,
               (v6 >> 27) + v10 - 1,
               ((a5 + 7) >> 3) + (v7 >> 19) - 1);
  return result;
}
