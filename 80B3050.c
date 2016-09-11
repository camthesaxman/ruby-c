int sub_80B3050()
{
  int v1; // [sp+0h] [bp-4h]@0

  pal_fill_black();
  CreateTask((int)Task_ExitSellMenu, 8);
  return v1;
}
