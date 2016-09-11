int __fastcall sub_806E420(unsigned __int8 a1, int a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v4; // r4@1
  int v5; // r5@1
  _BYTE *v6; // r0@1
  int v8; // [sp+0h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-4h]@1

  v4 = a1;
  v5 = a4;
  v6 = (_BYTE *)sub_8072C14(&gStringVar1, a3, 15, 1);
  *v6 = -70;
  sub_8072C14(v6 + 1, v5, 35, 1);
  v8 = 0;
  CpuFastSet(&v8, 33789024, 16777280);
  sub_8004E3C((int)&gWindowConfig_81E6CAC, 33788768, (int)&gStringVar1);
  CpuFastSet(33789024, (v4 << 10) + 100745984, 64);
  return v9;
}
