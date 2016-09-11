int __fastcall GetAffineAnimFrame(unsigned __int8 a1, int a2, int a3)
{
  _BYTE *v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = &sAffineAnimStates[12 * a1];
  *(_WORD *)a3 = *(_WORD *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)));
  *(_WORD *)(a3 + 2) = *(_WORD *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)) + 2);
  *(_BYTE *)(a3 + 4) = *(_BYTE *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)) + 4);
  *(_BYTE *)(a3 + 5) = *(_BYTE *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)) + 5);
  return v5;
}
