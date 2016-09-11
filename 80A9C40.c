signed int sub_80A9C40()
{
  unsigned __int8 v0; // r0@1
  int v1; // r4@1
  int v2; // r0@1

  v0 = CreateTask((int)sub_80A9E3C, 0);
  v1 = v0;
  SetTaskFuncWithFollowupFunc(v0, (int)sub_80A9E3C, (int)sub_80A9C98);
  v2 = (unsigned __int8)CreateTask((int)sub_80A9E04, 1);
  LOWORD(dword_3004B20[10 * v2 + 7]) = v1;
  LOWORD(dword_3004B20[10 * v1 + 7]) = v2;
  return 1;
}
