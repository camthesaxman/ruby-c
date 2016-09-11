int __fastcall sub_81191F4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 48) = 1;
  *(_WORD *)(a1 + 50) = 0;
  sub_8118724(a1);
  *(_BYTE *)(v1 + 62) &= 0xFBu;
  *(_DWORD *)(v1 + 28) = sub_8119134;
  return v3;
}
