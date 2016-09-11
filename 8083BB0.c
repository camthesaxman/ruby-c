int unref_sub_8083BB0()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = CreateTask((int)sub_80839DC, 80);
  SetTaskFuncWithFollowupFunc(v0, (int)sub_80839DC, (int)sub_80B9484);
  sub_80655F0();
  return v2;
}
