int InitFlashTimer()
{
  int v1; // [sp+0h] [bp-4h]@0

  SetFlashTimerIntr(2, gFlashTimerIntrFunc);
  return v1;
}
