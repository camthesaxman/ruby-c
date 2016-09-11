int __fastcall sub_80923FC(unsigned __int8 a1)
{
  int v1; // r5@1
  char v2; // r10@1
  unsigned __int8 v3; // r9@1
  unsigned __int8 v4; // r8@1
  unsigned __int8 v5; // r6@1
  unsigned __int8 v6; // r4@1
  unsigned __int8 v7; // r0@1
  int v9; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = sub_8092E10(a1, 5);
  v3 = sub_8092E10(v1, 4);
  v4 = sub_8092E10(v1, 0);
  v5 = sub_8092E10(v1, 1);
  v6 = sub_8092E10(v1, 2);
  v7 = sub_8092E10(v1, 3);
  sub_8091AF8(v2, v3, v4, v5, v6, v7);
  dword_3004B20[10 * v1] = (int)sub_80924A4;
  return v9;
}
