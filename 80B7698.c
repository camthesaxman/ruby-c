int __fastcall sub_80B7698(int a1, _WORD *a2)
{
  int v2; // r12@1
  _WORD *v3; // r3@1
  unsigned int v4; // r4@1
  __int16 v5; // r6@1
  int v6; // r1@2
  signed int v7; // r4@2
  signed int v8; // r0@3
  signed int v9; // r0@4
  int v11; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = v202E9D4;
  do
  {
    LOWORD(v6) = 0;
    v7 = v4 << 16;
    do
    {
      *(_WORD *)(2 * ((v7 >> 11) + (signed __int16)v6) + v2) = v5 + *v3;
      v8 = ((signed __int16)v6 + 1) << 16;
      ++v3;
      v6 = ((signed __int16)v6 + 1) & 0xFFFF;
    }
    while ( v8 >> 16 <= 29 );
    v9 = v7 + 0x10000;
    v4 = (unsigned int)(v7 + 0x10000) >> 16;
  }
  while ( v9 >> 16 <= 19 );
  return v11;
}
