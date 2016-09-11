int mapldr_080851BC()
{
  int v1; // [sp+0h] [bp-4h]@0

  sub_8053E90();
  pal_fill_for_maplights();
  script_env_2_enable();
  dword_300485C = 0;
  CreateTask((int)sub_8087470, 0);
  return v1;
}
