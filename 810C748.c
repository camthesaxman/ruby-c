int __fastcall sub_810C748(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80F98DC(0);
  v2 = sub_80F98DC(1u);
  sub_8072DEC(v2);
  MenuZeroFillWindowRect(7u, 4u, 0xDu, 0xBu);
  dword_3004B20[10 * v1] = (int)sub_810BF7C;
  return v4;
}
