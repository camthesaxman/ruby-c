int __fastcall sub_80ADF4C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int *v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = CreateTask((int)sub_80C8AD0, 0);
  SetTaskFuncWithFollowupFunc(v2, (int)sub_80C8AD0, (int)sub_80ADF98);
  v3 = &dword_3004B20[10 * v1];
  *v3 = (int)nullsub_89;
  sub_80AF860(v3);
  sub_80AFFE0(0);
  return v5;
}
