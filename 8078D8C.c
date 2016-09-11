int __fastcall sub_8078D8C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 52) = *(_WORD *)(a1 + 34);
  sub_8078D60(a1);
  *(_DWORD *)(v1 + 28) = sub_8078D44;
  call_via_r1(v1, sub_8078D44);
  return v3;
}
