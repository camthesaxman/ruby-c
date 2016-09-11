int __fastcall sub_806E3C0(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r5@1
  unsigned __int8 v4; // r8@1
  unsigned __int8 v5; // r6@1
  int v6; // r2@1
  unsigned __int16 v7; // r4@1
  unsigned __int8 v8; // r0@1
  int v10; // [sp+18h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  GetMonNickname(a3, (int)&gStringVar1);
  v7 = GetMonData(v3, 65, v6);
  v8 = GetMonGender();
  sub_806E35C(v7, v8, v5, v4, (int)&gStringVar1);
  return v10;
}
