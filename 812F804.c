int __fastcall sub_812F804(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, signed __int16 a6)
{
  int v7; // [sp+10h] [bp-4h]@0

  *(_WORD *)(a1 + 32) = a2;
  *(_WORD *)(a1 + 34) = a3;
  *(_WORD *)(a1 + 54) = 16 * a2;
  *(_WORD *)(a1 + 56) = 16 * a3;
  *(_WORD *)(a1 + 58) = 16 * (a4 - a2) / (unsigned __int16)a6;
  *(_WORD *)(a1 + 60) = 16 * (a5 - a3) / (unsigned __int16)a6;
  return v7;
}
