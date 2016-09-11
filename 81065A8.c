int __fastcall sub_81065A8(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5)
{
  int v5; // r0@1
  int v7; // [sp+Ch] [bp-4h]@0

  v5 = a1 << 16 >> 15;
  *(_WORD *)(v5 + 100723648) = a2;
  *(_WORD *)(v5 + 100723650) = a3;
  *(_WORD *)(v5 + 100723712) = a4;
  *(_WORD *)(v5 + 100723714) = a5;
  return v7;
}
