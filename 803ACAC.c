int __fastcall CreateMonWithIVsPersonality(int a1, unsigned __int16 a2, unsigned __int8 a3, int a4)
{
  int v4; // r4@1
  int v6; // [sp+10h] [bp-Ch]@1
  int v7; // [sp+18h] [bp-4h]@1

  v4 = a1;
  v6 = a4;
  CreateMon(a1, a2, a3, 0);
  SetMonData(v4, 66, &v6);
  CalculateMonStats(v4);
  return v7;
}
