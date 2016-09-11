int CheckForFlashMemory()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( IdentifyFlash() << 16 )
  {
    dword_3004820 = 0;
  }
  else
  {
    dword_3004820 = 1;
    InitFlashTimer();
  }
  return v1;
}
