int sub_80ABAAC()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  RunTasks();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v1;
}
