int __fastcall sub_811D8FC(int a1, __int16 a2, __int16 a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  __int16 v7; // r3@1
  int v9; // [sp+10h] [bp-4h]@0

  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = a3;
  *(_WORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 6) = a3;
  *(_WORD *)(a1 + 8) = a4;
  *(_WORD *)(a1 + 10) = a5;
  *(_WORD *)(a1 + 12) = a6;
  *(_WORD *)(a1 + 14) = a7;
  v7 = a4 - a2;
  *(_WORD *)(a1 + 16) = v7;
  if ( v7 & 0x8000 )
  {
    *(_WORD *)(a1 + 16) = -v7;
    *(_WORD *)(a1 + 12) = -a6;
  }
  *(_WORD *)(a1 + 18) = a5 - a3;
  if ( (a5 - a3) & 0x8000 )
  {
    *(_WORD *)(a1 + 18) = -(signed __int16)(a5 - a3);
    *(_WORD *)(a1 + 14) = -a7;
  }
  *(_WORD *)(a1 + 20) = 0;
  return v9;
}
