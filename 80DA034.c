int __fastcall sub_80DA034(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 0);
  *(_WORD *)(v1 + 34) += 20;
  *(_WORD *)(v1 + 48) = 191;
  *(_DWORD *)(v1 + 28) = sub_80DA05C;
  call_via_r1(v1, sub_80DA05C);
  return v3;
}
