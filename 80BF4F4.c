_BOOL4 __fastcall sub_80BF4F4(unsigned __int8 a1)
{
  unsigned int *v1; // r4@1
  int v2; // r0@1

  v1 = &dword_3004360[25 * a1];
  GetMonData((int)v1, 2, (int)&gStringVar1);
  v2 = GetMonData((int)v1, 11, 0);
  return StringCompareWithoutExtCtrlCodes((int)&gSpeciesNames[11 * v2], (int)&gStringVar1) != 0;
}
