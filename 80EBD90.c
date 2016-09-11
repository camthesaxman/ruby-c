int sub_80EBD90()
{
  signed int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  call_via_r0(v2000300);
  AnimateSprites();
  BuildOamBuffer();
  RunTasks();
  v0 = UpdatePaletteFade();
  sub_80F19FC(v0);
  return v2;
}
