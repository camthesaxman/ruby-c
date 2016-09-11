int sub_80101B8()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  c2_081284E0();
  AnimateSprites();
  v0 = BuildOamBuffer();
  v1 = UpdatePaletteFade(v0);
  RunTasks(v1);
  return v3;
}
