int __fastcall sub_806E050(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  unsigned __int8 v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+14h] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  GetMonNickname(a3, &v6);
  box_print(v3, v4, (int)&v6);
  return v7;
}
