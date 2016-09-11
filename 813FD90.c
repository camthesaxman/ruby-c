int __fastcall sub_813FD90(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  __int16 v3; // r2@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  v3 = *(_WORD *)(a1 + 50);
  *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 50) = v2;
  *(_WORD *)(a1 + 52) = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 54) = v3;
  *(_WORD *)(a1 + 56) = -40;
  sub_80786EC(a1);
  *(_DWORD *)(v1 + 28) = sub_813FDC0;
  return v5;
}
