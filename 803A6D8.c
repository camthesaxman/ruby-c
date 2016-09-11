int __fastcall ZeroMonData(int a1)
{
  int v1; // r4@1
  int v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@1

  v1 = a1;
  ZeroBoxMonData(a1);
  v3 = 0;
  SetMonData(v1, 55, &v3);
  SetMonData(v1, 56, &v3);
  SetMonData(v1, 57, &v3);
  SetMonData(v1, 58, &v3);
  SetMonData(v1, 59, &v3);
  SetMonData(v1, 60, &v3);
  SetMonData(v1, 61, &v3);
  SetMonData(v1, 62, &v3);
  SetMonData(v1, 63, &v3);
  v3 = 255;
  SetMonData(v1, 64, &v3);
  return v4;
}
