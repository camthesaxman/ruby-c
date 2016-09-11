int sub_8112290()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  sub_80035AC();
  UpdatePaletteFade();
  RunTasks();
  return v1;
}
