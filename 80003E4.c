int SeedRngWithRtc()
{
  unsigned int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = RtcGetMinuteCount();
  SeedRng((v0 >> 16) ^ (unsigned __int16)v0);
  return v2;
}
