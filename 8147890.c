int sub_8147890()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  RunTasks();
  UpdatePaletteFade();
  return v1;
}
