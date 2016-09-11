int __fastcall sub_80C39E4(unsigned __int8 a1, char a2)
{
  int v2; // r5@1
  int v3; // r0@1
  unsigned int v4; // r2@3
  unsigned int v5; // r2@5
  int v6; // r0@12

  v2 = a1;
  v3 = *(_WORD *)(2 * a1 + 0x2038688);
  if ( v3 < 0 )
    v3 = -v3;
  v4 = (v3 << 16) / 0x50u;
  if ( (_WORD)v4 )
    v4 += 0x10000;
  v5 = v4 >> 16;
  if ( !v5 && v3 << 16 )
    v5 = 1;
  if ( a2 && v5 > 0xA )
    v5 = 10;
  if ( (signed int)*(_WORD *)(2 * v2 + 0x2038688) >= 0 )
    v6 = v5 << 24;
  else
    v6 = -16777216 * v5;
  return SBYTE3(v6);
}
