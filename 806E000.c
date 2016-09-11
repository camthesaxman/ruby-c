int __fastcall box_print(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v6; // [sp+0h] [bp-14h]@1
  int v7; // [sp+10h] [bp-4h]@1

  v3 = a3;
  v4 = a1;
  v6 = 0;
  CpuFastSet(&v6, 33788768, 16777472);
  sub_8004E3C((int)&gWindowConfig_81E6CAC, 33788768, v3);
  CpuFastSet(33788768, (v4 << 10) + 100745216, 128);
  return v7;
}
