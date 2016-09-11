int sub_804BBCC()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = sub_804C29C();
  RunTasks(v0);
  AnimateSprites();
  v1 = BuildOamBuffer();
  UpdatePaletteFade(v1);
  return v3;
}
