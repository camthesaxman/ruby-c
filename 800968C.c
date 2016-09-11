int RtcGetMinuteCount()
{
  RtcGetInfo((int)&sRtc);
  return 1440 * (unsigned __int16)RtcGetDayCount(&sRtc)
       + 60 * (unsigned __int8)byte_3000464
       + (unsigned __int8)byte_3000465;
}
