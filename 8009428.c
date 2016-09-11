int RtcReset()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = RtcDisableInterrupts();
  SiiRtcReset(v0);
  RtcRestoreInterrupts();
  return v2;
}
