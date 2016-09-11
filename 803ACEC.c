int __fastcall CreateMonWithIVsOTID(int a1, unsigned __int16 a2, unsigned __int8 a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v7; // [sp+18h] [bp-4h]@0

  v4 = a1;
  v5 = a4;
  CreateMon(a1, a2, a3, 0);
  SetMonData(v4, 39, v5);
  SetMonData(v4, 40, v5 + 1);
  SetMonData(v4, 41, v5 + 2);
  SetMonData(v4, 42, v5 + 3);
  SetMonData(v4, 43, v5 + 4);
  SetMonData(v4, 44, v5 + 5);
  CalculateMonStats(v4);
  return v7;
}
