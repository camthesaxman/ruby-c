int __fastcall sub_8079C08(int a1, unsigned __int8 a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, signed __int16 a7)
{
  int v8; // [sp+10h] [bp-4h]@0

  *(_WORD *)(a1 + 24) = a7;
  *(_WORD *)(a1 + 38) = a2;
  *(_WORD *)(a1 + 26) = a3;
  *(_WORD *)(a1 + 28) = a4;
  *(_WORD *)(a1 + 34) = a5;
  *(_WORD *)(a1 + 36) = a6;
  *(_WORD *)(a1 + 30) = (a5 - a3) / (unsigned __int16)a7;
  *(_WORD *)(a1 + 32) = (a6 - a4) / (unsigned __int16)a7;
  return v8;
}
