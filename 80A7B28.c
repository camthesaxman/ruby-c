int __fastcall sub_80A7B28(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 52) = 0;
  *(_WORD *)(a1 + 46) = 0;
  sub_80A7B6C();
  *(_DWORD *)(v1 + 28) = sub_80A7B6C;
  return v3;
}
