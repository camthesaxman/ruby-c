int __fastcall sub_8040AA4(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-10h]@1

  v1 = a1;
  GetMonData(a1, 7, (int)&v4);
  v2 = GetMonData(v1, 1, 0);
  return (unsigned __int8)sub_8040AD0(v2, &v4);
}
