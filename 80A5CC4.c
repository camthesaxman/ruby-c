int sub_80A5CC4()
{
  int v1; // [sp+0h] [bp-4h]@0

  pal_fill_black();
  CreateTask((int)Task_CallItemUseOnFieldCallback, 8);
  return v1;
}
