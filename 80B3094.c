int sub_80B3094()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  RunTasks();
  UpdatePaletteFade();
  return v1;
}
