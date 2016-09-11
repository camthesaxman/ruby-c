int __fastcall sub_813A9EC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(6u, 6u, 0xDu, 0xBu);
  sub_80F98DC(0);
  sub_80F98DC(1u);
  sub_813AE0C(v1);
  dword_3004B20[10 * v1] = (int)sub_813A280;
  return v3;
}
