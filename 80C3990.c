int __fastcall sub_80C3990(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  unsigned int v4; // r1@1
  unsigned int v5; // r1@3

  v2 = a2;
  v3 = *(_WORD *)((2 * a1 & 0x1FF) + 0x2038670) << 16;
  v4 = v3 / 0x3F;
  if ( v3 / 0x3F & 0xFFFF )
    v4 += 0x10000;
  v5 = v4 >> 16;
  if ( !v5 && v3 )
    v5 = 1;
  if ( v2 && v5 > 0xA )
    LOBYTE(v5) = 10;
  return (unsigned __int8)v5;
}
