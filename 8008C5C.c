int Timer3Intr()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = StopTimer();
  StartTransfer(v0);
  return v2;
}
