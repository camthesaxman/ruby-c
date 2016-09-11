int sub_80BBB90()
{
  signed __int16 v1; // [sp+0h] [bp-Ch]@1
  int v2; // [sp+8h] [bp-4h]@1

  script_env_2_enable();
  HideMapNamePopUpWindow();
  sub_80BB764(&v1, &v1 + 1, 0x220u);
  MapGridSetMetatileIdAt(v1 + 7, *(&v1 + 1) + 7, 3616);
  CurrentMapDrawMetatileAt(v1 + 7, *(&v1 + 1) + 7);
  pal_fill_black();
  CreateTask((int)sub_80BBB50, 0);
  return v2;
}
