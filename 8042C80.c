int sub_8042C80()
{
  int v1; // [sp+4h] [bp-4h]@0

  script_env_2_enable();
  CreateTask(sub_8042CAC, 10);
  BeginNormalPaletteFade(-1, 0, 0, 16);
  return v1;
}
