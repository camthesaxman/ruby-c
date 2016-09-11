int sub_80AA064()
{
  int v1; // [sp+0h] [bp-4h]@0

  AnimateSprites();
  BuildOamBuffer();
  RunTasks();
  UpdatePaletteFade();
  if ( word_300179E == 4 )
    SetMainCallback2((int)sub_805469C);
  return v1;
}
