int sub_80A3118()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  v0 = RunTasks();
  sub_80A740C(v0);
  UpdatePaletteFade();
  return v2;
}
