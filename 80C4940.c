int sub_80C4940()
{
  int v1; // [sp+4h] [bp-4h]@0

  script_env_2_enable();
  CreateTask((int)sub_80C4914, 10);
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  return v1;
}
