int sub_80C76A0()
{
  int v1; // [sp+0h] [bp-8h]@1
  int v2; // [sp+4h] [bp-4h]@1

  MapGridSetMetatileIdAt(11, 8, 525);
  MapGridSetMetatileIdAt(11, 9, 533);
  MapGridSetMetatileIdAt(11, 10, 541);
  DrawWholeMapView();
  script_env_2_enable();
  v1 = 0;
  CpuFastSet(&v1, 33746632, 16777472);
  CreateTask((int)sub_80C752C, 10);
  return v2;
}
