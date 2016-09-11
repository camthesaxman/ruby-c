int __fastcall sub_8071284(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  InitMenuWindow(&gWindowConfig_81E6CE4);
  v2 = CreateTask(task50_startmenu, 80);
  SetTaskFuncWithFollowupFunc(v2, task50_startmenu, v1);
  return v4;
}
