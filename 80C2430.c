int sub_80C2430()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  RunTasks();
  UpdatePaletteFade();
  return v1;
}
