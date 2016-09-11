int __fastcall sub_803B4B4(int a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-4h]@1

  v2 = a2;
  v4 = 0;
  memcpy(a2, a1, 80);
  SetMonData(v2, 55, &v4);
  SetMonData(v2, 57, &v4);
  SetMonData(v2, 58, &v4);
  v4 = 255;
  SetMonData(v2, 64, &v4);
  CalculateMonStats(v2);
  return v5;
}
