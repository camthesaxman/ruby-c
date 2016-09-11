int __fastcall sub_80B9268(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r5@1
  signed int v3; // r4@1
  signed int v4; // r0@1
  int v5; // r0@3

  v1 = a1 << 16;
  v2 = v1 >> 16;
  v3 = (signed int)v1 >> 16;
  v4 = v3;
  if ( v3 < 0 )
    v4 = -v3;
  v5 = v4 % 10;
  if ( (_WORD)v5 )
    v2 = (v3 + 10 - (signed __int16)v5) & 0xFFFF;
  return (signed __int16)v2;
}
