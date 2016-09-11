int sub_8101678()
{
  int v1; // [sp+0h] [bp-4h]@0

  pal_fill_black();
  MenuDisplayMessageBox();
  sub_80FE220();
  CreateTask((int)sub_8101648, 8);
  return v1;
}
