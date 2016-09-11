int sub_800F808()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  v0 = sub_800374C((int)&unk_3004210);
  v1 = UpdatePaletteFade(v0);
  RunTasks(v1);
  return v3;
}
