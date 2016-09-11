int CB2_LinkTest()
{
  int v0; // r0@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  LinkTestProcessKeyInput();
  v0 = TestBlockTransfer();
  RunTasks(v0);
  AnimateSprites();
  v1 = BuildOamBuffer();
  UpdatePaletteFade(v1);
  return v3;
}
