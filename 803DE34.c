int __fastcall sub_803DE34(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  char v4; // r0@1
  char v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-4h]@1

  v2 = a1;
  v3 = a2;
  v4 = GetMonData(a1, 21, 0);
  v6 = v4;
  v6 = gUnknown_0820823C[v3] & v4;
  SetMonData(v2, 21, (int)&v6);
  return v7;
}
