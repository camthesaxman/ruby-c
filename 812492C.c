signed int __fastcall sub_812492C(int a1, unsigned __int8 a2, int a3)
{
  signed int v3; // r6@1
  int v4; // r5@2
  unsigned int v5; // r7@2
  signed int result; // r0@3
  int v7; // r1@4
  char v8; // r0@5

  v3 = a2;
  if ( a2 > 0xFu || (v4 = a1 + 12 * a2, v5 = *(_BYTE *)(v4 + 4), v5 >> 7) )
  {
    result = 255;
  }
  else
  {
    *(_WORD *)(v4 + 8) = *(_WORD *)a3;
    *(_WORD *)(v4 + 10) = *(_WORD *)(a3 + 2);
    *(_BYTE *)(v4 + 12) = *(_BYTE *)(a3 + 4);
    *(_BYTE *)(v4 + 13) = *(_BYTE *)(a3 + 5);
    *(_BYTE *)(v4 + 14) = *(_BYTE *)(a3 + 6);
    v7 = ((*(_BYTE *)(v4 + 15) & 0xE0 | *(_BYTE *)(a3 + 7) & 0x1F) & 0x9F | *(_BYTE *)(a3 + 7) & 0x60) & 0x7F | (*(_BYTE *)(a3 + 7) << 24 >> 31 << 7);
    *(_BYTE *)(v4 + 15) = v7;
    *(_BYTE *)(v4 + 4) = v5 & 0x80 | 0x80;
    *(_BYTE *)(v4 + 6) = 0;
    *(_BYTE *)(v4 + 5) = 0;
    if ( v7 & 0x80 )
      v8 = -1;
    else
      v8 = 1;
    *(_BYTE *)(v4 + 7) = v8;
    result = v3;
  }
  return result;
}
