int RtcCalcLocalTime()
{
  int v1; // [sp+4h] [bp-4h]@0

  RtcGetInfo((int)&sRtc);
  RtcCalcTimeDifference(&sRtc, (int)&word_3004038, 33705788);
  return v1;
}
