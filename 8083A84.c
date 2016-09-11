int __fastcall sub_8083A84(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = CreateTask((int)sub_80839DC, 80);
  SetTaskFuncWithFollowupFunc(v2, (int)sub_80839DC, v1);
  sub_80655F0();
  return v4;
}
