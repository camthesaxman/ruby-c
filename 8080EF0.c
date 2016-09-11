int sub_8080EF0()
{
  int v1; // [sp+0h] [bp-4h]@0

  script_env_2_enable();
  dword_300485C = (int)mapldr_default;
  CreateTask((int)sub_808115C, 10);
  return v1;
}
