int __fastcall sub_80BCBF8(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = 40 * a1;
  InitMenu(0, 18, 2, byte_3004B28[v1 + 6] + 1, byte_3004B28[v1 + 2], 11);
  MenuZeroFillWindowRect(1u, 0, 0xCu, 5u);
  sub_80F98DC(0);
  sub_80F98DC(1);
  dword_3004B20[v1 / 4] = (int)sub_80BC824;
  return v3;
}
