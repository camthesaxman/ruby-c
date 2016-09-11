int __fastcall sub_80798F4(int a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  *(_WORD *)(a1 + 22) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 26) = 0;
  *(_WORD *)(a1 + 38) = a2;
  *(_WORD *)(a1 + 28) = 256;
  *(_WORD *)(a1 + 30) = 256;
  *(_WORD *)(a1 + 32) = 0;
  sub_8079BF4(a1 + 34, a1 + 36);
  sub_8078E70(v2, 0);
  return v4;
}
