int sub_8112270()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  sub_800374C((int)&unk_3004210);
  UpdatePaletteFade();
  RunTasks();
  return v1;
}
