int __fastcall sub_80C4980(unsigned __int8 a1)
{
  __int16 v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  script_env_2_enable();
  v2 = CreateTask((int)sub_80C8604, 0);
  v3 = v2;
  SetTaskFuncWithFollowupFunc(v2, (int)sub_80C8604, (int)sub_80C49C4);
  HIWORD(dword_3004B20[10 * v3 + 6]) = v1;
  return v5;
}
