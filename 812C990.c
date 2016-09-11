int __fastcall sub_812C990(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v400004A = 7999;
  v4000000 |= 0x8000u;
  word_30042C4 = 0;
  word_3004240 = 0;
  v4000040 = 0;
  v4000044 = 0;
  sub_8078764(a1, 0);
  *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 8;
  *(_BYTE *)(v1 + 62) |= 4u;
  *(_DWORD *)(v1 + 28) = sub_812CA04;
  return v3;
}
