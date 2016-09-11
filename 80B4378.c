int __fastcall sub_80B4378(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  MenuZeroFillWindowRect(0, 0xAu, 0xDu, 0xDu);
  sub_80A3FA0((int)gBG1TilemapBuffer, 1u, 11, 12, 2u, 0);
  sub_80B3420();
  sub_80B3764(6, 7);
  sub_80B37EC();
  sub_80F98DC(0);
  sub_80F98DC(1);
  sub_80B32A4();
  dword_3004B20[10 * v1] = (int)sub_80B40E8;
  return v3;
}
