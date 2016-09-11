int __fastcall CreateMon(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r8@1
  int v5; // r6@1
  unsigned __int8 v7; // [sp+10h] [bp-24h]@1
  int v8; // [sp+14h] [bp-20h]@1
  int v9; // [sp+18h] [bp-1Ch]@1
  int v10; // [sp+30h] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v7 = a3;
  v9 = a4;
  ZeroMonData(a1);
  CreateBoxMon(v4, v5, v7, v9);
  SetMonData(v4, 56, &v7);
  v8 = 255;
  SetMonData(v4, 64, &v8);
  CalculateMonStats(v4);
  return v10;
}
