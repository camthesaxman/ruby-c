int sub_80B74FC()
{
  int v1; // [sp+4h] [bp-4h]@0

  StringCopy(&gStringVar1, v2000038);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0842C9A4);
  BasicInitMenuWindow((int)&gWindowConfig_81E6E88);
  MenuDisplayMessageBox();
  sub_8072044((int)&gStringVar4);
  return v1;
}
