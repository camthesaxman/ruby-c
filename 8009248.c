int RtcInit()
{
  int v0; // r0@1
  int v1; // r0@1
  signed __int16 v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  sErrorStatus = 0;
  v0 = RtcDisableInterrupts();
  v1 = SiiRtcUnprotect(v0);
  sProbeResult = SiiRtcProbe(v1);
  RtcRestoreInterrupts();
  if ( sProbeResult & 0xF )
  {
    v2 = sProbeResult & 0xF0;
    if ( sProbeResult & 0xF0 )
      v2 = 2;
    sErrorStatus = v2;
    RtcGetRawInfo(&sRtc);
    sErrorStatus = RtcCheckInfo(&sRtc);
  }
  else
  {
    sErrorStatus = 1;
  }
  return v4;
}
