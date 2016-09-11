int WaitForVBlank()
{
  int v1; // [sp+0h] [bp-4h]@0

  word_300178C &= 0xFFFEu;
  VBlankIntrWait();
  return v1;
}
