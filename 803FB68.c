int __fastcall sub_803FB68(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r8@1
  int v7; // [sp+14h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  GetMonData(a1, 2, (int)&gStringVar1);
  if ( !StringCompareWithoutExtCtrlCodes((int)&gSpeciesNames[11 * v4], (int)&gStringVar1) )
    SetMonData(v3, 2, (int)&gSpeciesNames[11 * v5]);
  return v7;
}
