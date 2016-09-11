int __fastcall sub_80842FC(int a1)
{
  int v1; // r6@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = FindTaskIdByFunc((int)sub_808433C);
  v3 = v2;
  SetTaskFuncWithFollowupFunc(v2, (int)sub_808433C, v1);
  LOWORD(dword_3004B20[10 * v3 + 2]) = 1;
  call_via_r5(v3);
  return v5;
}
