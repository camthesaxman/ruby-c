int __fastcall sub_806E630(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r8@1
  unsigned __int8 v4; // r5@1
  unsigned __int8 v5; // r6@1
  __int16 v6; // r4@1
  int v7; // r2@1
  signed __int16 v8; // r0@1
  int v10; // [sp+10h] [bp-4h]@0

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = GetMonData(a3, 57, a3);
  v8 = GetMonData(v3, 58, v7);
  sub_806E574(v4, v5, v6, v8);
  return v10;
}
