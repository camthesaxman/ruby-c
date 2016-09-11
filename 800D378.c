int __fastcall sub_800D378(_DWORD *a1, int a2, int a3, int a4, int a5, signed int a6, int a7, unsigned __int8 a8)
{
  unsigned int v8; // r1@2
  int v9; // r1@3
  int v10; // r0@6
  int v12; // [sp+10h] [bp-4h]@0

  if ( a6 == 201 )
  {
    v8 = (((a7 & 0x3000000u) >> 18) | ((a7 & 0x30000u) >> 12) | ((a7 & 0x300u) >> 6) | a7 & 3) % 0x1C & 0xFFFF;
    if ( v8 )
      v9 = (v8 + 412) & 0xFFFF;
    else
      v9 = 201;
    if ( a8 )
      v10 = gMonFrontPicTable[2 * v9];
    else
      v10 = (int)*(&gMonBackPicTable + 2 * v9);
  }
  else
  {
    if ( a6 <= 412 )
    {
      LZ77UnCompWram(*a1, a5);
      goto _0800D40C;
    }
    v10 = 147854628;
  }
  LZ77UnCompWram(v10, a5);
_0800D40C:
  DrawSpindaSpots((unsigned __int16)a6, a7, a5, a8);
  return v12;
}
