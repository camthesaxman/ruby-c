int CB2_813B798()
{
  int v1; // [sp+0h] [bp-4h]@0

  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  if ( !word_300179E || v202F38F & 0x80 )
  {
    if ( dword_3005ED0 != -1 )
      ++dword_3005ED0;
  }
  else
  {
    SetMainCallback2((int)CB2_813B7EC);
  }
  return v1;
}
