int sub_80B5AA0()
{
  int v1; // [sp+0h] [bp-4h]@0

  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v1;
}
