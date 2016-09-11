int sub_814395C()
{
  int v1; // [sp+0h] [bp-4h]@0

  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  if ( word_300179C & 2 && v2039324 && (int (*)())dword_3004B20[10 * v2039322] == sub_8143B68 )
  {
    sub_8143948();
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
    v2039325 = 1;
  }
  return v1;
}
