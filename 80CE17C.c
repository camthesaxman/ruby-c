int __fastcall sub_80CE17C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 0);
  *(_BYTE *)(v1 + 44) |= 0x40u;
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80CE1AC;
  return v3;
}
