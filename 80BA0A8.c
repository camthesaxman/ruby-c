int sub_80BA0A8()
{
  int v1; // [sp+0h] [bp-4h]@0

  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v1;
}
