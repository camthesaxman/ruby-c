int mapldr_080CA5C0()
{
  int v1; // [sp+4h] [bp-4h]@0

  script_env_2_enable();
  sub_8053E90();
  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  sp109_CreatePCMenu();
  sub_80B5838();
  CreateTask((int)sub_810D684, 10);
  return v1;
}
