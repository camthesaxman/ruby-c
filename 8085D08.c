int __fastcall sub_8085D08(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r0@1
  __int16 v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v4 = 2 * a1 & 0x1FFFF;
  v5 = *(_WORD *)(v4 + 33745608);
  *(_WORD *)(v4 + 33746632) = (((((v5 & 0x7C00u) >> 10) - ((signed int)(((v5 & 0x7C00u) >> 10) * a4) >> 4)) << 26) | ((((v5 & 0x3E0u) >> 5) - ((signed int)(((v5 & 0x3E0u) >> 5) * a3) >> 4)) << 21) | (((v5 & 0x1F) - ((v5 & 0x1F) * a2 >> 4)) << 16)) >> 16;
  return v7;
}
