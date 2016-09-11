int __fastcall sub_806E1F4(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r4@1
  signed int v4; // r5@1
  _BYTE *v5; // r2@1
  int v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@1

  v3 = a1;
  v4 = a3;
  v5 = &gUnknown_08376738[24 * a2] + 4 * a1;
  sub_806E1D0(0x40u, *v5 - 1, (v5[1] + 1) & 0xFF);
  gStringVar1 = -4;
  byte_20231CD = 18;
  byte_20231CE = 8;
  ConvertIntToDecimalString(&byte_20231CF, v4);
  v7 = 0;
  CpuFastSet(&v7, 33789024, 16777248);
  sub_8004E3C((int)&gWindowConfig_81E6CAC, 33788768, (int)&gStringVar1);
  CpuFastSet(33789024, (v3 << 10) + 100745728, 32);
  return v8;
}
