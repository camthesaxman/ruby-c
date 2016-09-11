int __fastcall sub_8104D30(unsigned __int8 a1, int a2, int a3, int a4)
{
  unsigned int v4; // r5@1
  signed int v5; // r2@1
  signed int v6; // r3@1
  char *v7; // r4@2
  int v9; // [sp+18h] [bp-4h]@0

  v4 = 4;
  v5 = a3 << 16;
  v6 = a4 << 16;
  while ( 1 )
  {
    v7 = (char *)&dword_3004B20[10 * v200003D + 2] + 2 * v4;
    if ( *(_WORD *)v7 == 64 )
      break;
    v4 = (v4 + 1) & 0xFF;
    if ( v4 > 0xF )
      return v9;
  }
  *(_WORD *)v7 = (unsigned __int8)sub_8105BF8(a1, a2, v5 >> 16, v6 >> 16);
  return v9;
}
