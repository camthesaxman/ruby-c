int __fastcall sub_810C668(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80F98DC(0);
  sub_80F98DC(1u);
  if ( v203924A > (unsigned int)v203924B && v2039249 + v203924B != v203924A )
    sub_80F979C(1u, 0);
  BasicInitMenuWindow((int)&gWindowConfig_81E6E50);
  MenuZeroFillWindowRect(7u, 6u, 0xDu, 0xBu);
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  dword_3004B20[10 * v1] = (int)sub_810BF7C;
  return v3;
}
