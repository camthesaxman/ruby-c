int __fastcall RtcCalcLocalTimeOffset(__int16 a1, char a2, char a3, char a4)
{
  int v5; // [sp+8h] [bp-4h]@0

  word_3004038 = a1;
  byte_300403A = a2;
  byte_300403B = a3;
  LOBYTE(dword_300403C) = a4;
  RtcGetInfo((int)&sRtc);
  RtcCalcTimeDifference(&sRtc, 33705788, (int)&word_3004038);
  return v5;
}
