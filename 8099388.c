int __fastcall sub_8099388(int a1, int a2)
{
  signed int v2; // r3@2
  unsigned int v3; // r4@2
  int v5; // [sp+4h] [bp-4h]@0

  a2 = (unsigned __int16)a2;
  *(_WORD *)(a1 + 48) = a2;
  if ( (_WORD)a2 )
  {
    v2 = 152;
    v3 = (unsigned int)(1572864 * (a2 - 1) + 0x100000) >> 16;
  }
  else
  {
    v2 = 104;
    v3 = 64;
  }
  *(_WORD *)(a1 + 50) = 8 * *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 52) = 8 * *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 54) = (8 * v2 - *(_WORD *)(a1 + 50)) / 8;
  *(_WORD *)(a1 + 56) = (((signed int)(v3 << 16) >> 13) - *(_WORD *)(a1 + 52)) / 8;
  *(_WORD *)(a1 + 58) = 8;
  *(_DWORD *)(a1 + 28) = sub_80993F4;
  return v5;
}
